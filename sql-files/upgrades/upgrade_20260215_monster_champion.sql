-- Idempotent schema migration for Monster Champion runtime tracking table.
-- Source reference: diffs/MonsterChampion/champion_monster.sql

CREATE TABLE IF NOT EXISTS `monstro_campeao` (
  `mob_gid` INT(11) NOT NULL,
  `raca` SMALLINT(6) NOT NULL,
  `tipo` SMALLINT(6) NOT NULL,
  `mapa` VARCHAR(55) NOT NULL,
  `timer` TINYINT(4) NOT NULL DEFAULT 10,
  PRIMARY KEY (`mob_gid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;
