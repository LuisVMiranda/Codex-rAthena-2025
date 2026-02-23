-- Optional damage-log cleanup helper (HeidiSQL-friendly)
-- Purpose: keep event_code=7 combat telemetry to last 12 hours.

DELIMITER $$

DROP PROCEDURE IF EXISTS `sp_ml_damage_log_cleanup_12h` $$
CREATE PROCEDURE `sp_ml_damage_log_cleanup_12h`(
  IN `p_chunk_size` INT UNSIGNED,
  IN `p_sleep_ms` INT UNSIGNED
)
BEGIN
  DECLARE v_rows BIGINT DEFAULT 0;

  IF p_chunk_size IS NULL OR p_chunk_size = 0 THEN
    SET p_chunk_size = 5000;
  END IF;
  IF p_sleep_ms IS NULL THEN
    SET p_sleep_ms = 100;
  END IF;

  cleanup_loop: LOOP
    DELETE FROM `damage_log_entries`
    WHERE `created_at` < (NOW() - INTERVAL 12 HOUR)
    ORDER BY `id`
    LIMIT p_chunk_size;

    SET v_rows = ROW_COUNT();
    IF v_rows = 0 THEN
      LEAVE cleanup_loop;
    END IF;

    IF p_sleep_ms > 0 THEN
      DO SLEEP(p_sleep_ms / 1000);
    END IF;
  END LOOP;
END $$

-- Optional scheduler (requires SET GLOBAL event_scheduler = ON):
-- DROP EVENT IF EXISTS `ev_ml_damage_log_cleanup_12h` $$
-- CREATE EVENT `ev_ml_damage_log_cleanup_12h`
--   ON SCHEDULE EVERY 12 HOUR
--   STARTS (NOW() + INTERVAL 12 HOUR)
--   DO CALL `sp_ml_damage_log_cleanup_12h`(5000, 100) $$

DELIMITER ;
