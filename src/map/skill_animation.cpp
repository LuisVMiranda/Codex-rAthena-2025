// Copyright (c) rAthena Dev Teams - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

#include "skill.hpp"

#include <limits>
#include <memory>
#include <unordered_map>

#include <common/showmsg.hpp>
#include <common/strlib.hpp>
#include <common/timer.hpp>
#include <common/utils.hpp>

#include "clif.hpp"
#include "map.hpp"
#include "pc.hpp"
#include "unit.hpp"

using namespace rathena;

static std::unordered_map<uint16, s_skill_animation_entry> skill_animation_db;

static bool skill_parse_row_skill_animation( char* split[], size_t columns, size_t current ){
	(void)columns;
	char *end = nullptr;
	int32 parsed = 0;

	trim(split[0]);
	if (split[0][0] == '\0') {
		ShowError("skill_parse_row_skill_animation: Missing skill name at line %zu.\n", current);
		return false;
	}

	uint16 skill_id = skill_name2id(split[0]);
	if (skill_id == 0) {
		ShowError("skill_parse_row_skill_animation: Invalid skill '%s' at line %zu.\n", split[0], current);
		return false;
	}

	trim(split[1]);
	parsed = strtol(split[1], &end, 10);
	if (*end != '\0' || parsed < -1) {
		ShowError("skill_parse_row_skill_animation: Invalid Start value '%s' for skill %u at line %zu.\n", split[1], skill_id, current);
		return false;
	}
	int32 start_delay = parsed;

	trim(split[2]);
	parsed = strtol(split[2], &end, 10);
	if (*end != '\0' || parsed <= 0 || parsed > std::numeric_limits<uint16>::max()) {
		ShowError("skill_parse_row_skill_animation: Invalid Interval value '%s' for skill %u at line %zu.\n", split[2], skill_id, current);
		return false;
	}
	uint16 interval = static_cast<uint16>(parsed);

	trim(split[3]);
	parsed = strtol(split[3], &end, 10);
	if (*end != '\0' || parsed <= 0 || parsed > std::numeric_limits<uint16>::max()) {
		ShowError("skill_parse_row_skill_animation: Invalid MotionSpeed value '%s' for skill %u at line %zu.\n", split[3], skill_id, current);
		return false;
	}
	uint16 motion_speed = static_cast<uint16>(parsed);

	trim(split[4]);
	parsed = strtol(split[4], &end, 10);
	if (*end != '\0' || parsed <= 0 || parsed > std::numeric_limits<uint8>::max()) {
		ShowError("skill_parse_row_skill_animation: Invalid Count value '%s' for skill %u at line %zu.\n", split[4], skill_id, current);
		return false;
	}
	uint8 count = static_cast<uint8>(parsed);

	trim(split[5]);
	std::string spin = split[5];
	util::tolower(spin);
	if (spin != "true" && spin != "false") {
		ShowError("skill_parse_row_skill_animation: Invalid Spin value '%s' for skill %u at line %zu.\n", split[5], skill_id, current);
		return false;
	}

	s_skill_animation_entry entry = {};
	entry.skill_id = skill_id;
	entry.start_delay = start_delay;
	entry.interval = interval;
	entry.motion_speed = motion_speed;
	entry.motion_count = count;
	entry.spin = (spin == "true");

	skill_animation_db[skill_id] = entry;
	return true;
}

void skill_readdb_animation( char* dbsubpath, bool enable_grf ){
	sv_readdb(dbsubpath, "skill_animation.txt", ',', 6, 6, -1, skill_parse_row_skill_animation, enable_grf);
}

const s_skill_animation_entry* skill_animation_get(uint16 skill_id){
	auto it = skill_animation_db.find(skill_id);
	if (it == skill_animation_db.end()) {
		return nullptr;
	}

	return &it->second;
}

int32 skill_animation_step_direction(int32 base_dir, uint8 step){
	if (base_dir < DIR_NORTH || base_dir >= DIR_MAX) {
		return -1;
	}

	return (base_dir + step) % DIR_MAX;
}

TIMER_FUNC(skill_play_animation){
	map_session_data* sd = map_id2sd(id);
	std::unique_ptr<s_skill_animation_environment> env(reinterpret_cast<s_skill_animation_environment*>(data));

	if (sd == nullptr || env == nullptr || sd->skill_animation.tid != tid) {
		return 0;
	}

	sd->skill_animation.tid = INVALID_TIMER;

	const s_skill_animation_entry* animation = skill_animation_get(env->skill_id);
	if (animation == nullptr || sd->prev == nullptr) {
		skill_clear_animation(sd);
		return 0;
	}

	clif_skill_animation_motion(*sd, env->target_id, animation->motion_speed);
	if (env->base_dir >= 0) {
		int32 dir = animation->spin ? skill_animation_step_direction(env->base_dir, sd->skill_animation.step) : env->base_dir;
		if (dir >= 0) {
			clif_skill_animation_dir(*sd, env->target_id, static_cast<uint8>(dir));
		}
	}

	sd->skill_animation.step++;
	if (sd->skill_animation.step >= animation->motion_count) {
		skill_clear_animation(sd);
		return 0;
	}

	auto* next_env = new s_skill_animation_environment(*env);
	sd->skill_animation.tid = add_timer(tick + animation->interval, skill_play_animation, sd->id, reinterpret_cast<intptr_t>(next_env));
	if (sd->skill_animation.tid == INVALID_TIMER) {
		delete next_env;
		skill_clear_animation(sd);
	}

	return 0;
}

void skill_clear_animation(block_list* bl){
	if (bl == nullptr || bl->type != BL_PC) {
		return;
	}

	map_session_data* sd = BL_CAST(BL_PC, bl);
	if (sd->skill_animation.tid != INVALID_TIMER) {
		delete_timer(sd->skill_animation.tid, skill_play_animation);
		sd->skill_animation.tid = INVALID_TIMER;
	}
	sd->skill_animation.step = 0;
}

void skill_animation_clear_db(){
	skill_animation_db.clear();
}
