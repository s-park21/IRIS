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
#define BAT_VOL_REQ             0x00
#define BAT_VOL_RES             0x01
#define CONTINUITY_REQ          0x02
#define CONTINUITY_RES          0x03
#define FIRE_DROGUE_REQ         0x04
#define FIRE_DROGUE_RES         0x05
#define FIRE_MAIN_REQ           0x06
#define FIRE_MAIN_RES           0x07
#define GPS1_STATE_REQ          0x08
#define GPS1_STATE_RES          0x09
#define GPS2_STATE_REQ          0x0A
#define GPS2_STATE_RES          0x0B
#define ACCEL1_STATE_REQ        0x0C
#define ACCEL1_STATE_RES        0x0D
#define ACCEL2_STATE_REQ        0x0E
#define ACCEL2_STATE_RES        0x0F
#define GYRO1_STATE_REQ         0x10
#define GYRO1_STATE_RES         0x11
#define GYRO2_STATE_REQ         0x12
#define GYRO2_STATE_RES         0x13
#define MAG1_STATE_REQ          0x14
#define MAG1_STATE_RES          0x15
#define MAG2_STATE_REQ          0x16
#define MAG2_STATE_RES          0x17
#define BARO1_STATE_REQ         0x18
#define BARO1_STATE_RES         0x19
#define BARO2_STATE_REQ         0x1A
#define BARO2_STATE_RES         0x1B
#define FLASH_MEMORY_STATE_REQ  0x1C
#define FLASH_MEMORY_STATE_RES  0x1D
#define FLASH_MEMORY_CONFIG_SET 0x1E
#define GPS_TRACKING_CONFIG_REQ 0x1F
#define GPS_TRACKING_CONFIG_RES 0x20
#define GPS_TRACKING_CONFIG_SET 0x21
#define GPS_TRACKING_PACKET     0x22
#define STREAM_PACKET_CONFIG_SET   0x23
#define STREAM_PACKET_TYPE_0    0x24
#define STREAM_PACKET_TYPE_1    0x25
#define STREAM_PACKET_TYPE_2    0x26
#define STREAM_PACKET_TYPE_3    0x27
#define STREAM_PACKET_TYPE_4    0x28
#define STREAM_PACKET_TYPE_5    0x29
#define STREAM_PACKET_TYPE_6    0x2A
#define STREAM_PACKET_TYPE_7    0x2B
#define STREAM_PACKET_CONFIG_REQ	0x2C
#define STREAM_PACKET_CONFIG_RES	0x2D
#define HEART_BEAT_CONFIG_PACKET_SET	0x2E
#define HEART_BEAT_PACKET		0x2F
#define ARM_DROGUE_REQ			0x30
#define ARM_MAIN_REQ			0x31
#define ARM_MAIN_RES			0x32
#define ARM_DROGUE_RES			0x33
#define SYSTEM_STATE_PACKET_REQ	0x34
#define SYSTEM_STATE_PACKET_TYPE_0_RES		0x35
#define SYSTEM_STATE_PACKET_TYPE_1_RES		0x36
#define SYSTEM_STATE_PACKET_TYPE_2_RES		0x37
#define SYSTEM_STATE_PACKET_TYPE_3_RES		0x38
#define SYSTEM_STATE_PACKET_TYPE_4_RES		0x39
#define SYSTEM_STATE_PACKET_TYPE_5_RES		0x3A
#define SYSTEM_STATE_PACKET_TYPE_6_RES		0x3B
#define SYSTEM_STATE_PACKET_TYPE_7_RES		0x3C

#define SERVO1_ACTUATE_REQ					0x3D
#define SERVO1_ACTUATE_RES					0x3E
#define SERVO1_STATE_REQ					0x3F
#define SERVO1_STATE_RES					0x40
#define SERVO1_SET_STATE					0x41
#define SERVO1_POSITION_REQ				0x42
#define SERVO1_POSITION_RES				0x43

#define SERVO2_ACTUATE_REQ					0x44
#define SERVO2_ACTUATE_RES					0x45
#define SERVO2_STATE_REQ					0x46
#define SERVO2_STATE_RES					0x47
#define SERVO2_SET_STATE					0x48
#define SERVO2_POSITION_REQ				0x49
#define SERVO2_POSITION_RES				0x4A

#define SERVO3_ACTUATE_REQ					0x4B
#define SERVO3_ACTUATE_RES					0x4C
#define SERVO3_STATE_REQ					0x4D
#define SERVO3_STATE_RES					0x4E
#define SERVO3_SET_STATE					0x4F
#define SERVO3_POSITION_REQ				0x50
#define SERVO3_POSITION_RES				0x51

#define SERVO4_ACTUATE_REQ					0x52
#define SERVO4_ACTUATE_RES					0x53
#define SERVO4_STATE_REQ					0x54
#define SERVO4_STATE_RES					0x55
#define SERVO4_SET_STATE					0x56
#define SERVO4_POSITION_REQ				0x57
#define SERVO4_POSITION_RES				0x58

#define SERVO5_ACTUATE_REQ					0x59
#define SERVO5_ACTUATE_RES					0x5A
#define SERVO5_STATE_REQ					0x5B
#define SERVO5_STATE_RES					0x5C
#define SERVO5_SET_STATE					0x5D
#define SERVO5_POSITION_REQ				0x5E
#define SERVO5_POSITION_RES				0x5F

#define SERVO6_ACTUATE_REQ					0x60
#define SERVO6_ACTUATE_RES					0x61
#define SERVO6_STATE_REQ					0x62
#define SERVO6_STATE_RES					0x63
#define SERVO6_SET_STATE					0x64
#define SERVO6_POSITION_REQ				0x65
#define SERVO6_POSITION_RES				0x66

#define DC_MOTOR1_PWM_SET					0x67
#define DC_MOTOR1_VELOCITY_SET				0x68
#define DC_MOTOR1_POSITION_SET				0x69
#define DC_MOTOR1_STATE_SET					0x6A
#define DC_MOTOR1_STATE_REQ					0x6B
#define DC_MOTOR1_STATE_RES					0x6C

#define DC_MOTOR2_PWM_SET					0x6D
#define DC_MOTOR2_VELOCITY_SET				0x6E
#define DC_MOTOR2_POSITION_SET				0x6F
#define DC_MOTOR2_STATE_SET					0x70
#define DC_MOTOR2_STATE_REQ					0x71
#define DC_MOTOR2_STATE_RES					0x72

#define DC_MOTOR3_PWM_SET					0x73
#define DC_MOTOR3_VELOCITY_SET				0x74
#define DC_MOTOR3_POSITION_SET				0x75
#define DC_MOTOR3_STATE_SET					0x76
#define DC_MOTOR3_STATE_REQ					0x77
#define DC_MOTOR3_STATE_RES					0x78

#define DC_MOTOR4_PWM_SET					0x79
#define DC_MOTOR4_VELOCITY_SET				0x7A
#define DC_MOTOR4_POSITION_SET				0x7B
#define DC_MOTOR4_STATE_SET					0x7C
#define DC_MOTOR4_STATE_REQ					0x7D
#define DC_MOTOR4_STATE_RES					0x7E

#define PRESSURE_SENSOR1_READ_REQ			0x7F
#define PRESSURE_SENSOR1_READ_RES			0x80

#define PRESSURE_SENSOR2_READ_REQ			0x81
#define PRESSURE_SENSOR2_READ_RES			0x82

#define PRESSURE_SENSOR3_READ_REQ			0x83
#define PRESSURE_SENSOR3_READ_RES			0x84

#define PRESSURE_SENSOR4_READ_REQ			0x85
#define PRESSURE_SENSOR4_READ_RES			0x86

#define TEMPERATURE_SENSOR1_READ_REQ		0x87
#define TEMPERATURE_SENSOR1_READ_RES		0x88

#define TEMPERATURE_SENSOR2_READ_REQ		0x89
#define TEMPERATURE_SENSOR2_READ_RES		0x8A

#define TEMPERATURE_SENSOR3_READ_REQ		0x8B
#define TEMPERATURE_SENSOR3_READ_RES		0x8C

#define TEMPERATURE_SENSOR4_READ_REQ		0x8D
#define TEMPERATURE_SENSOR4_READ_RES		0x8E


/* Payload lengths */
#define BAT_VOL_REQ_PACKET_LEN 0x00
#define BAT_VOL_RES_PACKET_LEN 0x04
#define CONTINUITY_REQ_PACKET_LEN 0x00
#define CONTINUITY _RES_PACKET_LEN 0x02
#define FIRE_DROGUE_REQ_PACKET_LEN 0x00
#define FIRE_DROGUE_RES_PACKET_LEN 0x01
#define FIRE_MAIN_REQ_PACKET_LEN 0x00
#define FIRE_MAIN_RES_PACKET_LEN 0x01
#define GPS1_STATE_REQ_PACKET_LEN 0x00
#define GPS1_STATE_RES_PACKET_LEN 0x0E
#define GPS2_STATE_REQ_PACKET_LEN 0x00
#define GPS2_STATE_RES_PACKET_LEN 0x0E
#define ACCEL1_STATE_REQ_PACKET_LEN 0x00
#define ACCEL1_STATE_RES_PACKET_LEN 0x0D
#define ACCEL2_STATE_REQ_PACKET_LEN 0x00
#define ACCEL2_STATE_RES_PACKET_LEN 0x0D
#define GYRO1_STATE_REQ_PACKET_LEN 0x00
#define GYRO1_STATE_RES_PACKET_LEN 0x0D
#define GYRO2_STATE_REQ_PACKET_LEN 0x00
#define GYRO2_STATE_RES_PACKET_LEN 0x0D
#define MAG1_STATE_REQ_PACKET_LEN 0x00
#define MAG1_STATE_RES_PACKET_LEN 0x0D
#define MAG2_STATE_REQ_PACKET_LEN 0x00
#define MAG2_STATE_RES_PACKET_LEN 0x0D
#define BARO1_STATE_REQ_PACKET_LEN 0x00
#define BARO1_STATE_RES_PACKET_LEN 0x0D
#define BARO2_STATE_REQ_PACKET_LEN 0x00
#define BARO2_STATE_RES_PACKET_LEN 0x0D
#define FLASH_MEMORY_STATE_REQ_PACKET_LEN 0x00
#define FLASH_MEMORY_STATE_RES_PACKET_LEN 0x05
#define FLASH_MEMORY_CONFIG_SET_PACKET_LEN 0x00
#define GPS_TRACKING_CONFIG_RES_PACKET_LEN 0x05
#define GPS_TRACKING_CONFIG_SET_PACKET_LEN 0x05
#define GPS_TRACKING_PACKET_PACKET_LEN 0x0D
#define STREAM_PACKET_CONFIG_SET_LEN 0x05
#define STREAM_PACKET_TYPE_0_LEN 0x4E
#define STREAM_PACKET_TYPE_1_LEN 0x00
#define STREAM_PACKET_TYPE_2_LEN 0x00
#define STREAM_PACKET_TYPE_3_LEN 0x00
#define STREAM_PACKET_TYPE_4_LEN 0x00
#define STREAM_PACKET_TYPE_5_LEN 0x00
#define STREAM_PACKET_TYPE_6_LEN 0x00
#define STREAM_PACKET_TYPE_7_LEN 0x00
#define STREAM_PACKET_CONFIG_REQ_LEN 0x00
#define STREAM_PACKET_CONFIG_RES_LEN 0x05
#define HEART_BEAT_CONFIG_PACKET_SET_LEN 0x05
#define HEART_BEAT_PACKET_LEN 	0x00
#define ARM_DROGUE_REQ_LEN 		0x01
#define ARM_MAIN_REQ_LEN 		0x01
#define ARM_MAIN_RES_LEN 		0x01
#define ARM_DROGUE_RES_LEN 		0x01
#define SYSTEM_STATE_PACKET_REQ_LEN 0x01
#define SYSTEM_STATE_PACKET_TYPE_0_RES_LEN 0x80
#define SYSTEM_STATE_PACKET_TYPE_1_RES_LEN 0x00
#define SYSTEM_STATE_PACKET_TYPE_2_RES_LEN 0x00
#define SYSTEM_STATE_PACKET_TYPE_3_RES_LEN 0x00
#define SYSTEM_STATE_PACKET_TYPE_4_RES_LEN 0x00
#define SYSTEM_STATE_PACKET_TYPE_5_RES_LEN 0x00
#define SYSTEM_STATE_PACKET_TYPE_6_RES_LEN 0x00
#define SYSTEM_STATE_PACKET_TYPE_7_RES_LEN 0x00

#define SERVO1_ACTUATE_REQ_LEN				0x02
#define SERVO1_ACTUATE_RES_LEN				0x01
#define SERVO1_STATE_REQ_LEN				0x00
#define SERVO1_STATE_RES_LEN				0x0D
#define SERVO1_SET_STATE_LEN				0x09
#define SERVO1_POSITION_REQ_LEN			0x00
#define SERVO1_POSITION_RES_LEN			0x02

#define SERVO2_ACTUATE_REQ_LEN				0x02
#define SERVO2_ACTUATE_RES_LEN				0x01
#define SERVO2_STATE_REQ_LEN				0x00
#define SERVO2_STATE_RES_LEN				0x0D
#define SERVO2_SET_STATE_LEN				0x09
#define SERVO2_POSITION_REQ_LEN			0x00
#define SERVO2_POSITION_RES_LEN			0x02

#define SERVO3_ACTUATE_REQ_LEN				0x02
#define SERVO3_ACTUATE_RES_LEN				0x01
#define SERVO3_STATE_REQ_LEN				0x00
#define SERVO3_STATE_RES_LEN				0x0D
#define SERVO3_SET_STATE_LEN				0x09
#define SERVO3_POSITION_REQ_LEN			0x00
#define SERVO3_POSITION_RES_LEN			0x02

#define SERVO4_ACTUATE_REQ_LEN				0x02
#define SERVO4_ACTUATE_RES_LEN				0x01
#define SERVO4_STATE_REQ_LEN				0x00
#define SERVO4_STATE_RES_LEN				0x0D
#define SERVO4_SET_STATE_LEN				0x09
#define SERVO4_POSITION_REQ_LEN			0x00
#define SERVO4_POSITION_RES_LEN			0x02

#define SERVO5_ACTUATE_REQ_LEN				0x02
#define SERVO5_ACTUATE_RES_LEN				0x01
#define SERVO5_STATE_REQ_LEN				0x00
#define SERVO5_STATE_RES_LEN				0x0D
#define SERVO5_SET_STATE_LEN				0x09
#define SERVO5_POSITION_REQ_LEN			0x00
#define SERVO5_POSITION_RES_LEN			0x02

#define SERVO6_ACTUATE_REQ_LEN				0x02
#define SERVO6_ACTUATE_RES_LEN				0x01
#define SERVO6_STATE_REQ_LEN				0x00
#define SERVO6_STATE_RES_LEN				0x0D
#define SERVO6_SET_STATE_LEN				0x09
#define SERVO6_POSITION_REQ_LEN			0x00
#define SERVO6_POSITION_RES_LEN			0x02

#define DC_MOTOR1_PWM_SET_LEN				0x02
#define DC_MOTOR1_VELOCITY_SET_LEN			0x04
#define DC_MOTOR1_POSITION_SET_LEN			0x04
#define DC_MOTOR1_STATE_SET_LEN				0x06
#define DC_MOTOR1_STATE_REQ_LEN			0x00
#define DC_MOTOR1_STATE_RES_LEN			0x0E

#define DC_MOTOR2_PWM_SET_LEN				0x02
#define DC_MOTOR2_VELOCITY_SET_LEN			0x04
#define DC_MOTOR2_POSITION_SET_LEN			0x04
#define DC_MOTOR2_STATE_SET_LEN				0x06
#define DC_MOTOR2_STATE_REQ_LEN			0x00
#define DC_MOTOR2_STATE_RES_LEN			0x0E

#define DC_MOTOR3_PWM_SET_LEN				0x02
#define DC_MOTOR3_VELOCITY_SET_LEN			0x04
#define DC_MOTOR3_POSITION_SET_LEN			0x04
#define DC_MOTOR3_STATE_SET_LEN				0x06
#define DC_MOTOR3_STATE_REQ_LEN			0x00
#define DC_MOTOR3_STATE_RES_LEN			0x0E

#define DC_MOTOR4_PWM_SET_LEN				0x02
#define DC_MOTOR4_VELOCITY_SET_LEN			0x04
#define DC_MOTOR4_POSITION_SET_LEN			0x04
#define DC_MOTOR4_STATE_SET_LEN				0x06
#define DC_MOTOR4_STATE_REQ_LEN			0x00
#define DC_MOTOR4_STATE_RES_LEN			0x0E

#define PRESSURE_SENSOR1_READ_REQ_LEN		0x00
#define PRESSURE_SENSOR1_READ_RES_LEN		0x06

#define PRESSURE_SENSOR2_READ_REQ_LEN		0x00
#define PRESSURE_SENSOR2_READ_RES_LEN		0x06

#define PRESSURE_SENSOR3_READ_REQ_LEN		0x00
#define PRESSURE_SENSOR3_READ_RES_LEN		0x06

#define PRESSURE_SENSOR4_READ_REQ_LEN		0x00
#define PRESSURE_SENSOR4_READ_RES_LEN		0x06

#define TEMPERATURE_SENSOR1_READ_REQ_LEN	0x00
#define TEMPERATURE_SENSOR1_READ_RES_LEN	0x06

#define TEMPERATURE_SENSOR2_READ_REQ_LEN	0x00
#define TEMPERATURE_SENSOR2_READ_RES_LEN	0x06

#define TEMPERATURE_SENSOR3_READ_REQ_LEN	0x00
#define TEMPERATURE_SENSOR3_READ_RES_LEN	0x06

#define TEMPERATURE_SENSOR4_READ_REQ_LEN	0x00
#define TEMPERATURE_SENSOR4_READ_RES_LEN	0x06


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

typedef struct __attribute__((__packed__)) {
    uint16_t servo_position;
} servo1_actuate_req;

typedef struct __attribute__((__packed__)) {
    uint8_t state_packet_type;
} servo1_actuate_res;

typedef struct __attribute__((__packed__)) {
    uint8_t servo_enabled;
    float min_angle_limit;
    float max_angle_limit;
    float current_draw;
} servo1_state_res;

typedef struct __attribute__((__packed__)) {
    uint8_t servo_enabled;
    float min_angle_limit;
    float max_angle_limit;
} servo1_set_state;

typedef struct __attribute__((__packed__)) {
    uint16_t servo_position;
} servo1_position_res;

typedef struct __attribute__((__packed__)) {
    uint16_t servo_position;
} servo2_actuate_req;

typedef struct __attribute__((__packed__)) {
    uint8_t state_packet_type;
} servo2_actuate_res;

typedef struct __attribute__((__packed__)) {
    uint8_t servo_enabled;
    float min_angle_limit;
    float max_angle_limit;
    float current_draw;
} servo2_state_res;

typedef struct __attribute__((__packed__)) {
    uint8_t servo_enabled;
    float min_angle_limit;
    float max_angle_limit;
} servo2_set_state;

typedef struct __attribute__((__packed__)) {
    uint16_t servo_position;
} servo2_position_res;

typedef struct __attribute__((__packed__)) {
    uint16_t servo_position;
} servo3_actuate_req;

typedef struct __attribute__((__packed__)) {
    uint8_t state_packet_type;
} servo3_actuate_res;

typedef struct __attribute__((__packed__)) {
    uint8_t servo_enabled;
    float min_angle_limit;
    float max_angle_limit;
    float current_draw;
} servo3_state_res;

typedef struct __attribute__((__packed__)) {
    uint8_t servo_enabled;
    float min_angle_limit;
    float max_angle_limit;
} servo3_set_state;

typedef struct __attribute__((__packed__)) {
    uint16_t servo_position;
} servo3_position_res;

typedef struct __attribute__((__packed__)) {
    uint16_t servo_position;
} servo4_actuate_req;

typedef struct __attribute__((__packed__)) {
    uint8_t state_packet_type;
} servo4_actuate_res;

typedef struct __attribute__((__packed__)) {
    uint8_t servo_enabled;
    float min_angle_limit;
    float max_angle_limit;
    float current_draw;
} servo4_state_res;

typedef struct __attribute__((__packed__)) {
    uint8_t servo_enabled;
    float min_angle_limit;
    float max_angle_limit;
} servo4_set_state;

typedef struct __attribute__((__packed__)) {
    uint16_t servo_position;
} servo4_position_res;

typedef struct __attribute__((__packed__)) {
    uint16_t servo_position;
} servo5_actuate_req;

typedef struct __attribute__((__packed__)) {
    uint8_t state_packet_type;
} servo5_actuate_res;

typedef struct __attribute__((__packed__)) {
    uint8_t servo_enabled;
    float min_angle_limit;
    float max_angle_limit;
    float current_draw;
} servo5_state_res;

typedef struct __attribute__((__packed__)) {
    uint8_t servo_enabled;
    float min_angle_limit;
    float max_angle_limit;
} servo5_set_state;

typedef struct __attribute__((__packed__)) {
    uint16_t servo_position;
} servo5_position_res;

typedef struct __attribute__((__packed__)) {
    uint16_t servo_position;
} servo6_actuate_req;

typedef struct __attribute__((__packed__)) {
    uint8_t state_packet_type;
} servo6_actuate_res;

typedef struct __attribute__((__packed__)) {
    uint8_t servo_enabled;
    float min_angle_limit;
    float max_angle_limit;
    float current_draw;
} servo6_state_res;

typedef struct __attribute__((__packed__)) {
    uint8_t servo_enabled;
    float min_angle_limit;
    float max_angle_limit;
} servo6_set_state;

typedef struct __attribute__((__packed__)) {
    uint16_t servo_position;
} servo6_position_res;

typedef struct __attribute__((__packed__)) {
    uint16_t motor_pwm;
} dc_motor1_pwm_set;

typedef struct __attribute__((__packed__)) {
    uint32_t motor_velocity;
} dc_motor1_velocity_set;

typedef struct __attribute__((__packed__)) {
    uint32_t motor_position;
} dc_motor1_position_set;

typedef struct __attribute__((__packed__)) {
    uint8_t motor_enable;
    uint8_t home_motor;
    uint32_t current_limit;
} dc_motor1_state_set;

typedef struct __attribute__((__packed__)) {
    uint8_t motor_enable;
    uint8_t motor_homed;
    uint32_t motor_position;
    uint32_t motor_velocity;
    uint32_t motor_current;
} dc_motor1_state_res;

typedef struct __attribute__((__packed__)) {
    uint16_t motor_pwm;
} dc_motor2_pwm_set;

typedef struct __attribute__((__packed__)) {
    uint32_t motor_velocity;
} dc_motor2_velocity_set;

typedef struct __attribute__((__packed__)) {
    uint32_t motor_position;
} dc_motor2_position_set;

typedef struct __attribute__((__packed__)) {
    uint8_t motor_enable;
    uint8_t home_motor;
    uint32_t current_limit;
} dc_motor2_state_set;

typedef struct __attribute__((__packed__)) {
    uint8_t motor_enable;
    uint8_t motor_homed;
    uint32_t motor_position;
    uint32_t motor_velocity;
    uint32_t motor_current;
} dc_motor2_state_res;

typedef struct __attribute__((__packed__)) {
    uint16_t motor_pwm;
} dc_motor3_pwm_set;

typedef struct __attribute__((__packed__)) {
    uint32_t motor_velocity;
} dc_motor3_velocity_set;

typedef struct __attribute__((__packed__)) {
    uint32_t motor_position;
} dc_motor3_position_set;

typedef struct __attribute__((__packed__)) {
    uint8_t motor_enable;
    uint8_t home_motor;
    uint32_t current_limit;
} dc_motor3_state_set;

typedef struct __attribute__((__packed__)) {
    uint8_t motor_enable;
    uint8_t motor_homed;
    uint32_t motor_position;
    uint32_t motor_velocity;
    uint32_t motor_current;
} dc_motor3_state_res;

typedef struct __attribute__((__packed__)) {
    uint16_t motor_pwm;
} dc_motor4_pwm_set;

typedef struct __attribute__((__packed__)) {
    uint32_t motor_velocity;
} dc_motor4_velocity_set;

typedef struct __attribute__((__packed__)) {
    uint32_t motor_position;
} dc_motor4_position_set;

typedef struct __attribute__((__packed__)) {
    uint8_t motor_enable;
    uint8_t home_motor;
    uint32_t current_limit;
} dc_motor4_state_set;

typedef struct __attribute__((__packed__)) {
    uint8_t motor_enable;
    uint8_t motor_homed;
    uint32_t motor_position;
    uint32_t motor_velocity;
    uint32_t motor_current;
} dc_motor4_state_res;

typedef struct __attribute__((__packed__)) {
    uint16_t raw_adc_value;
    uint32_t pressure_reading;
} pressure_sensor1_read_res;

typedef struct __attribute__((__packed__)) {
    uint16_t raw_adc_value;
    uint32_t pressure_reading;
} pressure_sensor2_read_res;

typedef struct __attribute__((__packed__)) {
    uint16_t raw_adc_value;
    uint32_t pressure_reading;
} pressure_sensor3_read_res;

typedef struct __attribute__((__packed__)) {
    uint16_t raw_adc_value;
    uint32_t pressure_reading;
} pressure_sensor4_read_res;

typedef struct __attribute__((__packed__)) {
    uint16_t raw_adc_value;
    uint32_t temperature_reading;
} temperature_sensor1_read_res;

typedef struct __attribute__((__packed__)) {
    uint16_t raw_adc_value;
    uint32_t temperature_reading;
} temperature_sensor2_read_res;

typedef struct __attribute__((__packed__)) {
    uint16_t raw_adc_value;
    uint32_t temperature_reading;
} temperature_sensor3_read_res;

typedef struct __attribute__((__packed__)) {
    uint16_t raw_adc_value;
    uint32_t temperature_reading;
} temperature_sensor4_read_res;

#endif /* INC_PACKETS_H_ */
