/*
 * Packet_Definitions.h
 *
 *  Created on: 22 Mar. 2024
 *      Author: Angus McLennan
 */

#ifndef INC_PACKETS_H_
#define INC_PACKETS_H_

#include <stdint.h>

/* Packet identifier definitions */
typedef enum
{
	BAT_VOL_REQ = 0x00,
	BAT_VOL_RES = 0x01,
	CONTINUITY_REQ = 0x02,
	CONTINUITY_RES = 0x03,
	FIRE_DROGUE_REQ = 0x04,
	FIRE_DROGUE_RES = 0x05,
	FIRE_MAIN_REQ = 0x06,
	FIRE_MAIN_RES = 0x07,
	GPS1_STATE_REQ = 0x08,
	GPS1_STATE_RES = 0x09,
	GPS2_STATE_REQ = 0x0A,
	GPS2_STATE_RES = 0x0B,
	ACCEL1_STATE_REQ = 0x0C,
	ACCEL1_STATE_RES = 0x0D,
	ACCEL2_STATE_REQ = 0x0E,
	ACCEL2_STATE_RES = 0x0F,
	GYRO1_STATE_REQ = 0x10,
	GYRO1_STATE_RES = 0x11,
	GYRO2_STATE_REQ = 0x12,
	GYRO2_STATE_RES = 0x13,
	MAG1_STATE_REQ = 0x14,
	MAG1_STATE_RES = 0x15,
	MAG2_STATE_REQ = 0x16,
	MAG2_STATE_RES = 0x17,
	BARO1_STATE_REQ = 0x18,
	BARO1_STATE_RES = 0x19,
	BARO2_STATE_REQ = 0x1A,
	BARO2_STATE_RES = 0x1B,
	FLASH_MEMORY_STATE_REQ = 0x1C,
	FLASH_MEMORY_STATE_RES = 0x1D,
	FLASH_MEMORY_CONFIG_SET = 0x1E,
	GPS_TRACKING_CONFIG_REQ = 0x1F,
	GPS_TRACKING_CONFIG_RES = 0x20,
	GPS_TRACKING_CONFIG_SET = 0x21,
	GPS_TRACKING_PACKET = 0x22,
	STREAM_PACKET_CONFIG_SET = 0x23,
	STREAM_PACKET_TYPE_0 = 0x24,
	STREAM_PACKET_TYPE_1 = 0x25,
	STREAM_PACKET_TYPE_2 = 0x26,
	STREAM_PACKET_TYPE_3 = 0x27,
	STREAM_PACKET_TYPE_4 = 0x28,
	STREAM_PACKET_TYPE_5 = 0x29,
	STREAM_PACKET_TYPE_6 = 0x2A,
	STREAM_PACKET_TYPE_7 = 0x2B,
	STREAM_PACKET_CONFIG_REQ = 0x2C,
	STREAM_PACKET_CONFIG_RES = 0x2D,
	HEART_BEAT_CONFIG_PACKET_SET = 0x2E,
	HEART_BEAT_PACKET = 0x2F,
	ARM_DROGUE_REQ = 0x30,
	ARM_MAIN_REQ = 0x31,
	ARM_MAIN_RES = 0x32,
	ARM_DROGUE_RES = 0x33,
	SYSTEM_STATE_PACKET_REQ = 0x34,
	SYSTEM_STATE_PACKET_TYPE_0_RES = 0x35,
	SYSTEM_STATE_PACKET_TYPE_1_RES = 0x36,
	SYSTEM_STATE_PACKET_TYPE_2_RES = 0x37,
	SYSTEM_STATE_PACKET_TYPE_3_RES = 0x38,
	SYSTEM_STATE_PACKET_TYPE_4_RES = 0x39,
	SYSTEM_STATE_PACKET_TYPE_5_RES = 0x3A,
	SYSTEM_STATE_PACKET_TYPE_6_RES = 0x3B,
	SYSTEM_STATE_PACKET_TYPE_7_RES = 0x3C,
	SERVO1_ACTUATE_REQ = 0x3D,
	SERVO1_ACTUATE_RES = 0x3E,
	SERVO1_STATE_REQ = 0x3F,
	SERVO1_STATE_RES = 0x40,
	SERVO1_SET_STATE = 0x41,
	SERVO1_POSITION_REQ = 0x42,
	SERVO1_POSITION_RES = 0x43,
	SERVO2_ACTUATE_REQ = 0x44,
	SERVO2_ACTUATE_RES = 0x45,
	SERVO2_STATE_REQ = 0x46,
	SERVO2_STATE_RES = 0x47,
	SERVO2_SET_STATE = 0x48,
	SERVO2_POSITION_REQ = 0x49,
	SERVO2_POSITION_RES = 0x4A,
	SERVO3_ACTUATE_REQ = 0x4B,
	SERVO3_ACTUATE_RES = 0x4C,
	SERVO3_STATE_REQ = 0x4D,
	SERVO3_STATE_RES = 0x4E,
	SERVO3_SET_STATE = 0x4F,
	SERVO3_POSITION_REQ = 0x50,
	SERVO3_POSITION_RES = 0x51,
	SERVO4_ACTUATE_REQ = 0x52,
	SERVO4_ACTUATE_RES = 0x53,
	SERVO4_STATE_REQ = 0x54,
	SERVO4_STATE_RES = 0x55,
	SERVO4_SET_STATE = 0x56,
	SERVO4_POSITION_REQ = 0x57,
	SERVO4_POSITION_RES = 0x58,
	SERVO5_ACTUATE_REQ = 0x59,
	SERVO5_ACTUATE_RES = 0x5A,
	SERVO5_STATE_REQ = 0x5B,
	SERVO5_STATE_RES = 0x5C,
	SERVO5_SET_STATE = 0x5D,
	SERVO5_POSITION_REQ = 0x5E,
	SERVO5_POSITION_RES = 0x5F,
	SERVO6_ACTUATE_REQ = 0x60,
	SERVO6_ACTUATE_RES = 0x61,
	SERVO6_STATE_REQ = 0x62,
	SERVO6_STATE_RES = 0x63,
	SERVO6_SET_STATE = 0x64,
	SERVO6_POSITION_REQ = 0x65,
	SERVO6_POSITION_RES = 0x66,
	DC_MOTOR1_PWM_SET = 0x67,
	DC_MOTOR1_VELOCITY_SET = 0x68,
	DC_MOTOR1_POSITION_SET = 0x69,
	DC_MOTOR1_STATE_SET = 0x6A,
	DC_MOTOR1_STATE_REQ = 0x6B,
	DC_MOTOR1_STATE_RES = 0x6C,
	DC_MOTOR2_PWM_SET = 0x6D,
	DC_MOTOR2_VELOCITY_SET = 0x6E,
	DC_MOTOR2_POSITION_SET = 0x6F,
	DC_MOTOR2_STATE_SET = 0x70,
	DC_MOTOR2_STATE_REQ = 0x71,
	DC_MOTOR2_STATE_RES = 0x72,
	DC_MOTOR3_PWM_SET = 0x73,
	DC_MOTOR3_VELOCITY_SET = 0x74,
	DC_MOTOR3_POSITION_SET = 0x75,
	DC_MOTOR3_STATE_SET = 0x76,
	DC_MOTOR3_STATE_REQ = 0x77,
	DC_MOTOR3_STATE_RES = 0x78,
	DC_MOTOR4_PWM_SET = 0x79,
	DC_MOTOR4_VELOCITY_SET = 0x7A,
	DC_MOTOR4_POSITION_SET = 0x7B,
	DC_MOTOR4_STATE_SET = 0x7C,
	DC_MOTOR4_STATE_REQ = 0x7D,
	DC_MOTOR4_STATE_RES = 0x7E,
	PRESSURE_SENSOR1_READ_REQ = 0x7F,
	PRESSURE_SENSOR1_READ_RES = 0x80,
	PRESSURE_SENSOR2_READ_REQ = 0x81,
	PRESSURE_SENSOR2_READ_RES = 0x82,
	PRESSURE_SENSOR3_READ_REQ = 0x83,
	PRESSURE_SENSOR3_READ_RES = 0x84,
	PRESSURE_SENSOR4_READ_REQ = 0x85,
	PRESSURE_SENSOR4_READ_RES = 0x86,
	TEMPERATURE_SENSOR1_READ_REQ = 0x87,
	TEMPERATURE_SENSOR1_READ_RES = 0x88,
	TEMPERATURE_SENSOR2_READ_REQ = 0x89,
	TEMPERATURE_SENSOR2_READ_RES = 0x8A,
	TEMPERATURE_SENSOR3_READ_REQ = 0x8B,
	TEMPERATURE_SENSOR3_READ_RES = 0x8C,
	TEMPERATURE_SENSOR4_READ_REQ = 0x8D,
	TEMPERATURE_SENSOR4_READ_RES = 0x8E
} identifiers;

/* Payload lengths */
typedef enum
{
	BAT_VOL_REQ_PACKET_LEN = 0x00,
	BAT_VOL_RES_PACKET_LEN = 0x04,
	CONTINUITY_REQ_PACKET_LEN = 0x00,
	CONTINUITY_RES_PACKET_LEN = 0x02,
	FIRE_DROGUE_REQ_PACKET_LEN = 0x00,
	FIRE_DROGUE_RES_PACKET_LEN = 0x01,
	FIRE_MAIN_REQ_PACKET_LEN = 0x00,
	FIRE_MAIN_RES_PACKET_LEN = 0x01,
	GPS1_STATE_REQ_PACKET_LEN = 0x00,
	GPS1_STATE_RES_PACKET_LEN = 0x0E,
	GPS2_STATE_REQ_PACKET_LEN = 0x00,
	GPS2_STATE_RES_PACKET_LEN = 0x0E,
	ACCEL1_STATE_REQ_PACKET_LEN = 0x00,
	ACCEL1_STATE_RES_PACKET_LEN = 0x0D,
	ACCEL2_STATE_REQ_PACKET_LEN = 0x00,
	ACCEL2_STATE_RES_PACKET_LEN = 0x0D,
	GYRO1_STATE_REQ_PACKET_LEN = 0x00,
	GYRO1_STATE_RES_PACKET_LEN = 0x0D,
	GYRO2_STATE_REQ_PACKET_LEN = 0x00,
	GYRO2_STATE_RES_PACKET_LEN = 0x0D,
	MAG1_STATE_REQ_PACKET_LEN = 0x00,
	MAG1_STATE_RES_PACKET_LEN = 0x0D,
	MAG2_STATE_REQ_PACKET_LEN = 0x00,
	MAG2_STATE_RES_PACKET_LEN = 0x0D,
	BARO1_STATE_REQ_PACKET_LEN = 0x00,
	BARO1_STATE_RES_PACKET_LEN = 0x0D,
	BARO2_STATE_REQ_PACKET_LEN = 0x00,
	BARO2_STATE_RES_PACKET_LEN = 0x0D,
	FLASH_MEMORY_STATE_REQ_PACKET_LEN = 0x00,
	FLASH_MEMORY_STATE_RES_PACKET_LEN = 0x05,
	FLASH_MEMORY_CONFIG_SET_PACKET_LEN = 0x00,
	GPS_TRACKING_CONFIG_RES_PACKET_LEN = 0x05,
	GPS_TRACKING_CONFIG_SET_PACKET_LEN = 0x05,
	GPS_TRACKING_PACKET_PACKET_LEN = 0x0D,
	STREAM_PACKET_CONFIG_SET_LEN = 0x05,
	STREAM_PACKET_TYPE_0_LEN = 0x4E,
	STREAM_PACKET_TYPE_1_LEN = 0x00,
	STREAM_PACKET_TYPE_2_LEN = 0x00,
	STREAM_PACKET_TYPE_3_LEN = 0x00,
	STREAM_PACKET_TYPE_4_LEN = 0x00,
	STREAM_PACKET_TYPE_5_LEN = 0x00,
	STREAM_PACKET_TYPE_6_LEN = 0x00,
	STREAM_PACKET_TYPE_7_LEN = 0x00,
	STREAM_PACKET_CONFIG_REQ_LEN = 0x00,
	STREAM_PACKET_CONFIG_RES_LEN = 0x05,
	HEART_BEAT_CONFIG_PACKET_SET_LEN = 0x05,
	HEART_BEAT_PACKET_LEN = 0x00,
	ARM_DROGUE_REQ_LEN = 0x01,
	ARM_MAIN_REQ_LEN = 0x01,
	ARM_MAIN_RES_LEN = 0x01,
	ARM_DROGUE_RES_LEN = 0x01,
	SYSTEM_STATE_PACKET_REQ_LEN = 0x01,
	SYSTEM_STATE_PACKET_TYPE_0_RES_LEN = 0x80,
	SYSTEM_STATE_PACKET_TYPE_1_RES_LEN = 0x00,
	SYSTEM_STATE_PACKET_TYPE_2_RES_LEN = 0x00,
	SYSTEM_STATE_PACKET_TYPE_3_RES_LEN = 0x00,
	SYSTEM_STATE_PACKET_TYPE_4_RES_LEN = 0x00,
	SYSTEM_STATE_PACKET_TYPE_5_RES_LEN = 0x00,
	SYSTEM_STATE_PACKET_TYPE_6_RES_LEN = 0x00,
	SYSTEM_STATE_PACKET_TYPE_7_RES_LEN = 0x00,
	SERVO1_ACTUATE_REQ_LEN = 0x02,
	SERVO1_ACTUATE_RES_LEN = 0x01,
	SERVO1_STATE_REQ_LEN = 0x00,
	SERVO1_STATE_RES_LEN = 0x0D,
	SERVO1_SET_STATE_LEN = 0x09,
	SERVO1_POSITION_REQ_LEN = 0x00,
	SERVO1_POSITION_RES_LEN = 0x02,
	SERVO2_ACTUATE_REQ_LEN = 0x02,
	SERVO2_ACTUATE_RES_LEN = 0x01,
	SERVO2_STATE_REQ_LEN = 0x00,
	SERVO2_STATE_RES_LEN = 0x0D,
	SERVO2_SET_STATE_LEN = 0x09,
	SERVO2_POSITION_REQ_LEN = 0x00,
	SERVO2_POSITION_RES_LEN = 0x02,
	SERVO3_ACTUATE_REQ_LEN = 0x02,
	SERVO3_ACTUATE_RES_LEN = 0x01,
	SERVO3_STATE_REQ_LEN = 0x00,
	SERVO3_STATE_RES_LEN = 0x0D,
	SERVO3_SET_STATE_LEN = 0x09,
	SERVO3_POSITION_REQ_LEN = 0x00,
	SERVO3_POSITION_RES_LEN = 0x02,
	SERVO4_ACTUATE_REQ_LEN = 0x02,
	SERVO4_ACTUATE_RES_LEN = 0x01,
	SERVO4_STATE_REQ_LEN = 0x00,
	SERVO4_STATE_RES_LEN = 0x0D,
	SERVO4_SET_STATE_LEN = 0x09,
	SERVO4_POSITION_REQ_LEN = 0x00,
	SERVO4_POSITION_RES_LEN = 0x02,
	SERVO5_ACTUATE_REQ_LEN = 0x02,
	SERVO5_ACTUATE_RES_LEN = 0x01,
	SERVO5_STATE_REQ_LEN = 0x00,
	SERVO5_STATE_RES_LEN = 0x0D,
	SERVO5_SET_STATE_LEN = 0x09,
	SERVO5_POSITION_REQ_LEN = 0x00,
	SERVO5_POSITION_RES_LEN = 0x02,
	SERVO6_ACTUATE_REQ_LEN = 0x02,
	SERVO6_ACTUATE_RES_LEN = 0x01,
	SERVO6_STATE_REQ_LEN = 0x00,
	SERVO6_STATE_RES_LEN = 0x0D,
	SERVO6_SET_STATE_LEN = 0x09,
	SERVO6_POSITION_REQ_LEN = 0x00,
	SERVO6_POSITION_RES_LEN = 0x02,
	DC_MOTOR1_PWM_SET_LEN = 0x02,
	DC_MOTOR1_VELOCITY_SET_LEN = 0x04,
	DC_MOTOR1_POSITION_SET_LEN = 0x04,
	DC_MOTOR1_STATE_SET_LEN = 0x06,
	DC_MOTOR1_STATE_REQ_LEN = 0x00,
	DC_MOTOR1_STATE_RES_LEN = 0x0E,
	DC_MOTOR2_PWM_SET_LEN = 0x02,
	DC_MOTOR2_VELOCITY_SET_LEN = 0x04,
	DC_MOTOR2_POSITION_SET_LEN = 0x04,
	DC_MOTOR2_STATE_SET_LEN = 0x06,
	DC_MOTOR2_STATE_REQ_LEN = 0x00,
	DC_MOTOR2_STATE_RES_LEN = 0x0E,
	DC_MOTOR3_PWM_SET_LEN = 0x02,
	DC_MOTOR3_VELOCITY_SET_LEN = 0x04,
	DC_MOTOR3_POSITION_SET_LEN = 0x04,
	DC_MOTOR3_STATE_SET_LEN = 0x06,
	DC_MOTOR3_STATE_REQ_LEN = 0x00,
	DC_MOTOR3_STATE_RES_LEN = 0x0E,
	DC_MOTOR4_PWM_SET_LEN = 0x02,
	DC_MOTOR4_VELOCITY_SET_LEN = 0x04,
	DC_MOTOR4_POSITION_SET_LEN = 0x04,
	DC_MOTOR4_STATE_SET_LEN = 0x06,
	DC_MOTOR4_STATE_REQ_LEN = 0x00,
	DC_MOTOR4_STATE_RES_LEN = 0x0E,
	PRESSURE_SENSOR1_READ_REQ_LEN = 0x00,
	PRESSURE_SENSOR1_READ_RES_LEN = 0x06,
	PRESSURE_SENSOR2_READ_REQ_LEN = 0x00,
	PRESSURE_SENSOR2_READ_RES_LEN = 0x06,
	PRESSURE_SENSOR3_READ_REQ_LEN = 0x00,
	PRESSURE_SENSOR3_READ_RES_LEN = 0x06,
	PRESSURE_SENSOR4_READ_REQ_LEN = 0x00,
	PRESSURE_SENSOR4_READ_RES_LEN = 0x06,
	TEMPERATURE_SENSOR1_READ_REQ_LEN = 0x00,
	TEMPERATURE_SENSOR1_READ_RES_LEN = 0x06,
	TEMPERATURE_SENSOR2_READ_REQ_LEN = 0x00,
	TEMPERATURE_SENSOR2_READ_RES_LEN = 0x06,
	TEMPERATURE_SENSOR3_READ_REQ_LEN = 0x00,
	TEMPERATURE_SENSOR3_READ_RES_LEN = 0x06,
	TEMPERATURE_SENSOR4_READ_REQ_LEN = 0x00,
	TEMPERATURE_SENSOR4_READ_RES_LEN = 0x06
} payload_lengths;

typedef struct __attribute__((__packed__))
{
	float battery_voltage;
} bat_vol_res;

typedef struct __attribute__((__packed__))
{
	uint8_t drogue_ematch_state;
	uint8_t main_ematch_state;
} continuity_res;

typedef struct __attribute__((__packed__))
{
	uint8_t fire_drogue_result;
} fire_drogue_res;

typedef struct
{
	uint8_t fire_main_result;
} fire_main_res;

typedef struct __attribute__((__packed__))
{
	uint8_t gps1_good;
	float gps1_latitude;
	float gps1_longitude;
	float gps1_altitude;
	uint8_t gps1_satellites_tracked;
} gps1_state_res;

typedef struct __attribute__((__packed__))
{
	uint8_t gps2_good;
	float gps2_latitude;
	float gps2_longitude;
	float gps2_altitude;
	uint8_t gps2_satellites_tracked;
} gps2_state_res;

typedef struct __attribute__((__packed__))
{
	uint8_t acc1_good;
	float acc1X;
	float acc1Y;
	float acc1Z;
} accel1_state_res;

typedef struct __attribute__((__packed__))
{
	uint8_t acc2_good;
	float acc2X;
	float acc2Y;
	float acc2Z;
} accel2_state_res;

typedef struct __attribute__((__packed__))
{
	uint8_t gyro1_good;
	float gyro1X;
	float gyro1Y;
	float gyro1Z;
} gyro1_state_res;

typedef struct __attribute__((__packed__))
{
	uint8_t gyro2_good;
	float gyro2X;
	float gyro2Y;
	float gyro2Z;
} gyro2_state_res;

typedef struct __attribute__((__packed__))
{
	uint8_t mag1_good;
	float mag1X;
	float mag1Y;
	float mag1Z;
} mag1_state_res;

typedef struct __attribute__((__packed__))
{
	uint8_t mag2_good;
	float mag2X;
	float mag2Y;
	float mag2Z;
} mag2_state_res;

typedef struct __attribute__((__packed__))
{
	uint8_t baro1_good;
	float baro1_pressure;
	float baro1_temperature;
	float baro1_altitude;
} baro1_state_res;

typedef struct __attribute__((__packed__))
{
	uint8_t baro2_good;
	float baro2_pressure;
	float baro2_temperature;
	float baro2_altitude;
} baro2_state_res;

typedef struct __attribute__((__packed__))
{
	uint8_t flash_good;
	float flash_write_speed;
	float available_flash_memory;
} flash_state_res;

typedef struct __attribute__((__packed__))
{
	uint8_t flash_logging_enabled;
	float flash_write_speed;
} flash_memory_config_set;

typedef struct __attribute__((__packed__))
{
	uint8_t gps_tracking_enabled;
	float gps_tracking_chirp_frequency;
} gps_tracking_config_res;

typedef struct __attribute__((__packed__))
{
	uint8_t gps_tracking_enabled;
	float gps_tracking_chirp_frequency;
} gps_tracking_config_set;

typedef struct __attribute__((__packed__))
{
	float gps1_latitude;
	float gps1_longitude;
	float gps1_altitude;
	uint8_t gps1_satellites_tracked;
} gps_tracking_packet;

typedef struct __attribute__((__packed__))
{
	uint8_t stream_packet_type_enabled;
	float packet_stream_frequency;
} stream_packet_config_set;

typedef struct __attribute__((__packed__))
{
	uint32_t timestamp;
	float gps1_latitude;
	float gps1_longitude;
	float gps1_altitude;
	uint8_t gps1_satellites_tracked;
	float acc1X;
	float acc1Y;
	float acc1Z;
	float velX;
	float velY;
	float velZ;
	float baro1_altitude;
	float gyro1X;
	float gyro1Y;
	float gyro1Z;
	float quaternion_q1;
	float quaternion_q2;
	float quaternion_q3;
	float quaternion_q4;
	float battery_voltage;
	uint8_t flight_state;
	float ambient_temperature;
	float available_flash_memory;
} stream_packet_type_0;

typedef struct __attribute__((__packed__))
{

} stream_packet_type_1;

typedef struct __attribute__((__packed__))
{

} stream_packet_type_2;

typedef struct __attribute__((__packed__))
{

} stream_packet_type_3;

typedef struct __attribute__((__packed__))
{

} stream_packet_type_4;

typedef struct __attribute__((__packed__))
{

} stream_packet_type_5;

typedef struct __attribute__((__packed__))
{

} stream_packet_type_6;

typedef struct __attribute__((__packed__))
{

} stream_packet_type_7;

typedef struct __attribute__((__packed__))
{
	uint8_t stream_packet_type_enabled;
	float packet_stream_frequency;
} stream_packet_config_res;

typedef struct __attribute__((__packed__))
{
	uint8_t heart_beat_enabled;
	float heart_beat_chirp_frequency;
} heart_beat_config_packet_set;

typedef struct __attribute__((__packed__))
{

} heart_beat_packet;

typedef struct __attribute__((__packed__))
{
	uint8_t drogue_arm_state_set;
} arm_drogue_req;

typedef struct __attribute__((__packed__))
{
	uint8_t main_arm_state_set;
} arm_main_req;

typedef struct __attribute__((__packed__))
{
	uint8_t arm_main_state;
} arm_main_res;

typedef struct __attribute__((__packed__))
{
	uint8_t arm_drogue_state;
} arm_drogue_res;

typedef struct __attribute__((__packed__))
{
	uint8_t state_packet_type;
} system_state_packet_req;

typedef struct __attribute__((__packed__))
{
	uint32_t timestamp;
	float battery_voltage;
	uint8_t drogue_ematch_state;
	uint8_t main_ematch_state;
	uint8_t arm_drogue_state;
	uint8_t arm_main_state;
	uint8_t gps1_good;
	float gps1_latitude;
	float gps1_longitude;
	uint8_t gps1_satellites_tracked;
	uint8_t acc1_good;
	float acc1X;
	float acc1Y;
	float acc1Z;
	uint8_t acc2_good;
	float acc2X;
	float acc2Y;
	float acc2Z;
	uint8_t gyro1_good;
	float gyro1X;
	float gyro1Y;
	float gyro1Z;
	uint8_t gyro2_good;
	float gyro2X;
	float gyro2Y;
	float gyro2Z;
	uint8_t mag1_good;
	float mag1X;
	float mag1Y;
	float mag1Z;
	uint8_t baro1_good;
	float baro1_pressure;
	float baro1_temperature;
	float baro1_altitude;
	uint8_t flash_good;
	float flash_write_speed;
	float available_flash_memory;
	uint8_t gps_tracking_enabled;
	float gps_tracking_chirp_frequency;
	uint8_t stream_packet_type_enabled;
	float packet_stream_frequency;
	uint8_t heart_beat_enabled;
	float heart_beat_chirp_frequency;
} system_state_packet_type_0_res;

typedef struct __attribute__((__packed__))
{
} stream_state_packet_type_1_res;

typedef struct __attribute__((__packed__))
{
} stream_state_packet_type_2_res;

typedef struct __attribute__((__packed__))
{
} stream_state_packet_type_3_res;

typedef struct __attribute__((__packed__))
{
} stream_state_packet_type_4_res;

typedef struct __attribute__((__packed__))
{
} stream_state_packet_type_5_res;

typedef struct __attribute__((__packed__))
{
} stream_state_packet_type_6_res;

typedef struct __attribute__((__packed__))
{
} stream_state_packet_type_7_res;

typedef struct __attribute__((__packed__))
{
	uint16_t servo_position;
} servo1_actuate_req;

typedef struct __attribute__((__packed__))
{
	uint8_t state_packet_type;
} servo1_actuate_res;

typedef struct __attribute__((__packed__))
{
	uint8_t servo_enabled;
	float min_angle_limit;
	float max_angle_limit;
	float current_draw;
} servo1_state_res;

typedef struct __attribute__((__packed__))
{
	uint8_t servo_enabled;
	float min_angle_limit;
	float max_angle_limit;
} servo1_set_state;

typedef struct __attribute__((__packed__))
{
	uint16_t servo_position;
} servo1_position_res;

typedef struct __attribute__((__packed__))
{
	uint16_t servo_position;
} servo2_actuate_req;

typedef struct __attribute__((__packed__))
{
	uint8_t state_packet_type;
} servo2_actuate_res;

typedef struct __attribute__((__packed__))
{
	uint8_t servo_enabled;
	float min_angle_limit;
	float max_angle_limit;
	float current_draw;
} servo2_state_res;

typedef struct __attribute__((__packed__))
{
	uint8_t servo_enabled;
	float min_angle_limit;
	float max_angle_limit;
} servo2_set_state;

typedef struct __attribute__((__packed__))
{
	uint16_t servo_position;
} servo2_position_res;

typedef struct __attribute__((__packed__))
{
	uint16_t servo_position;
} servo3_actuate_req;

typedef struct __attribute__((__packed__))
{
	uint8_t state_packet_type;
} servo3_actuate_res;

typedef struct __attribute__((__packed__))
{
	uint8_t servo_enabled;
	float min_angle_limit;
	float max_angle_limit;
	float current_draw;
} servo3_state_res;

typedef struct __attribute__((__packed__))
{
	uint8_t servo_enabled;
	float min_angle_limit;
	float max_angle_limit;
} servo3_set_state;

typedef struct __attribute__((__packed__))
{
	uint16_t servo_position;
} servo3_position_res;

typedef struct __attribute__((__packed__))
{
	uint16_t servo_position;
} servo4_actuate_req;

typedef struct __attribute__((__packed__))
{
	uint8_t state_packet_type;
} servo4_actuate_res;

typedef struct __attribute__((__packed__))
{
	uint8_t servo_enabled;
	float min_angle_limit;
	float max_angle_limit;
	float current_draw;
} servo4_state_res;

typedef struct __attribute__((__packed__))
{
	uint8_t servo_enabled;
	float min_angle_limit;
	float max_angle_limit;
} servo4_set_state;

typedef struct __attribute__((__packed__))
{
	uint16_t servo_position;
} servo4_position_res;

typedef struct __attribute__((__packed__))
{
	uint16_t servo_position;
} servo5_actuate_req;

typedef struct __attribute__((__packed__))
{
	uint8_t state_packet_type;
} servo5_actuate_res;

typedef struct __attribute__((__packed__))
{
	uint8_t servo_enabled;
	float min_angle_limit;
	float max_angle_limit;
	float current_draw;
} servo5_state_res;

typedef struct __attribute__((__packed__))
{
	uint8_t servo_enabled;
	float min_angle_limit;
	float max_angle_limit;
} servo5_set_state;

typedef struct __attribute__((__packed__))
{
	uint16_t servo_position;
} servo5_position_res;

typedef struct __attribute__((__packed__))
{
	uint16_t servo_position;
} servo6_actuate_req;

typedef struct __attribute__((__packed__))
{
	uint8_t state_packet_type;
} servo6_actuate_res;

typedef struct __attribute__((__packed__))
{
	uint8_t servo_enabled;
	float min_angle_limit;
	float max_angle_limit;
	float current_draw;
} servo6_state_res;

typedef struct __attribute__((__packed__))
{
	uint8_t servo_enabled;
	float min_angle_limit;
	float max_angle_limit;
} servo6_set_state;

typedef struct __attribute__((__packed__))
{
	uint16_t servo_position;
} servo6_position_res;

typedef struct __attribute__((__packed__))
{
	uint16_t motor_pwm;
} dc_motor1_pwm_set;

typedef struct __attribute__((__packed__))
{
	uint32_t motor_velocity;
} dc_motor1_velocity_set;

typedef struct __attribute__((__packed__))
{
	uint32_t motor_position;
} dc_motor1_position_set;

typedef struct __attribute__((__packed__))
{
	uint8_t motor_enable;
	uint8_t home_motor;
	uint32_t current_limit;
} dc_motor1_state_set;

typedef struct __attribute__((__packed__))
{
	uint8_t motor_enable;
	uint8_t motor_homed;
	uint32_t motor_position;
	uint32_t motor_velocity;
	uint32_t motor_current;
} dc_motor1_state_res;

typedef struct __attribute__((__packed__))
{
	uint16_t motor_pwm;
} dc_motor2_pwm_set;

typedef struct __attribute__((__packed__))
{
	uint32_t motor_velocity;
} dc_motor2_velocity_set;

typedef struct __attribute__((__packed__))
{
	uint32_t motor_position;
} dc_motor2_position_set;

typedef struct __attribute__((__packed__))
{
	uint8_t motor_enable;
	uint8_t home_motor;
	uint32_t current_limit;
} dc_motor2_state_set;

typedef struct __attribute__((__packed__))
{
	uint8_t motor_enable;
	uint8_t motor_homed;
	uint32_t motor_position;
	uint32_t motor_velocity;
	uint32_t motor_current;
} dc_motor2_state_res;

typedef struct __attribute__((__packed__))
{
	uint16_t motor_pwm;
} dc_motor3_pwm_set;

typedef struct __attribute__((__packed__))
{
	uint32_t motor_velocity;
} dc_motor3_velocity_set;

typedef struct __attribute__((__packed__))
{
	uint32_t motor_position;
} dc_motor3_position_set;

typedef struct __attribute__((__packed__))
{
	uint8_t motor_enable;
	uint8_t home_motor;
	uint32_t current_limit;
} dc_motor3_state_set;

typedef struct __attribute__((__packed__))
{
	uint8_t motor_enable;
	uint8_t motor_homed;
	uint32_t motor_position;
	uint32_t motor_velocity;
	uint32_t motor_current;
} dc_motor3_state_res;

typedef struct __attribute__((__packed__))
{
	uint16_t motor_pwm;
} dc_motor4_pwm_set;

typedef struct __attribute__((__packed__))
{
	uint32_t motor_velocity;
} dc_motor4_velocity_set;

typedef struct __attribute__((__packed__))
{
	uint32_t motor_position;
} dc_motor4_position_set;

typedef struct __attribute__((__packed__))
{
	uint8_t motor_enable;
	uint8_t home_motor;
	uint32_t current_limit;
} dc_motor4_state_set;

typedef struct __attribute__((__packed__))
{
	uint8_t motor_enable;
	uint8_t motor_homed;
	uint32_t motor_position;
	uint32_t motor_velocity;
	uint32_t motor_current;
} dc_motor4_state_res;

typedef struct __attribute__((__packed__))
{
	uint16_t raw_adc_value;
	uint32_t pressure_reading;
} pressure_sensor1_read_res;

typedef struct __attribute__((__packed__))
{
	uint16_t raw_adc_value;
	uint32_t pressure_reading;
} pressure_sensor2_read_res;

typedef struct __attribute__((__packed__))
{
	uint16_t raw_adc_value;
	uint32_t pressure_reading;
} pressure_sensor3_read_res;

typedef struct __attribute__((__packed__))
{
	uint16_t raw_adc_value;
	uint32_t pressure_reading;
} pressure_sensor4_read_res;

typedef struct __attribute__((__packed__))
{
	uint16_t raw_adc_value;
	uint32_t temperature_reading;
} temperature_sensor1_read_res;

typedef struct __attribute__((__packed__))
{
	uint16_t raw_adc_value;
	uint32_t temperature_reading;
} temperature_sensor2_read_res;

typedef struct __attribute__((__packed__))
{
	uint16_t raw_adc_value;
	uint32_t temperature_reading;
} temperature_sensor3_read_res;

typedef struct __attribute__((__packed__))
{
	uint16_t raw_adc_value;
	uint32_t temperature_reading;
} temperature_sensor4_read_res;

#endif /* INC_PACKETS_H_ */
