#ifndef IRIS_PROTOCOL_H
#define IRIS_PROTOCOL_H

/**
 * @file IRIS.h
 * @brief Intra-rocket Interface System - IRIS Protocol Header File
 *
 * This document outlines the protocol implemented for communications
 * between systems on sounding rockets.
 *
 * @author Angus McLennan
 * @date 22/03/2024
 */

#include <stdint.h>

/*
 *   **Data structure defintions**:
 *   These following data structures, contain pointers to the actual locations
 *   in memory where the data is stored on the application machine.
 *   To correctly use this library, the relevant structures should
 *   be defined in main.c (or the files that have the correct scope).
 *   The user must then assign the pointers in these structures to the
 *   locations in memory where the actual data is stored (when it is read
 *   from a sensor for example).
 *   This library uses extern to reference these structs defined in the main.c
 *   scope therefore, the structures defined in main.c must have the same name
 *   as the ones defined below.
 */

typedef struct
{
    float *batteryVoltage;
} batteryVoltage;

typedef struct
{
    uint8_t *drogueEmatchState;
    uint8_t *mainEmatchState;
} continuityReading;

typedef struct
{
    uint8_t *gps1State;
    float *gps1Latitude;
    float *gps1Longitude;
    float *gps1Altitude;
    uint8_t *gps1SatellitesTracked;
} gps1State;

typedef struct
{
    uint8_t *gps2State;
    float *gps2Latitude;
    float *gps2Longitude;
    float *gps2Altitude;
    uint8_t *gps2SatellitesTracked;
} gps2State;

typedef struct
{
    uint8_t *acc1Good;
    float *acc1X;
    float *acc1Y;
    float *acc1Z;
} accel1State;

typedef struct
{
    uint8_t *acc2Good;
    float *acc2X;
    float *acc2Y;
    float *acc2Z;
} accel2State;

typedef struct
{
    uint8_t *gyro1Good;
    float *gyro1X;
    float *gyro1Y;
    float *gyro1Z;
} gyro1State;

typedef struct
{
    uint8_t *gyro2Good;
    float *gyro2X;
    float *gyro2Y;
    float *gyro2Z;
} gyro2State;

typedef struct
{
    uint8_t *mag1Good;
    float *mag1X;
    float *mag1Y;
    float *mag1Z;
} mag1State;

typedef struct
{
    uint8_t *mag2Good;
    float *mag2X;
    float *mag2Y;
    float *mag2Z;
} mag1State;

typedef struct
{
    uint8_t *baro1Good;
    float *baro1Pressure;
    float *baro1Temperature;
    float *baro1Altitude;
} baro1StateReq;

typedef struct
{
    uint8_t *baro2Good;
    float *baro2Pressure;
    float *baro2Temperature;
    float *baro2Altitude;
} baro1StateReq;

typedef struct
{
    uint8_t *flashGood;
    float *flashWriteSpeed;
    float *availableFlashMemory;
} flashMemoryState;

typedef struct
{
    uint8_t *gpsTrackingEnabled;
    float *gpsTrackingChirpFrequency;
} gpsTrackingConfig;

typedef struct
{
    uint8_t *packetTypeEnabled;
    float *packetStreamFrequency;
} streamPacketConfig;

typedef struct
{
    uint32_t *timestamp;
    float *gps1Latitude;
    float *gps1Longitude;
    float *gps1Altitude;
    uint8_t *gps1SatellitesTracked;
    float *acc1X;
    float *acc1Y;
    float *acc1Z;
    float *velX;
    float *velY;
    float *velZ;
    float *baro1Altitude;
    float *gyro1X;
    float *gyro1Y;
    float *gyro1Z;
    float *quaternion1;
    float *quaternion2;
    float *quaternion3;
    float *quaternion4;
    float *batteryVoltage;
    uint8_t *flightState;
    float *ambientTemperature;
    float *availableFlashMemory;
} streamPacketType0;

typedef struct
{
    // TBD
} streamPacketType1;

typedef struct
{
    // TBD
} streamPacketType2;

typedef struct
{
    // TBD
} streamPacketType3;

typedef struct
{
    // TBD
} streamPacketType4;

typedef struct
{
    // TBD
} streamPacketType5;

typedef struct
{
    // TBD
} streamPacketType6;

typedef struct
{
    // TBD
} streamPacketType7;

typedef struct
{
    uint8_t *heartBeatEnabled;
    float *heartBeatChirpFrequency;
} heartBeatPacketConfig;

typedef struct
{
    // TBD
} heartBeatPacket;

typedef struct
{
    uint8_t *mainArmState;
    uint8_t *drogueArmState;
} armState;

typedef struct
{
    uint32_t *timestamp;
    float *batteryVoltage;
    uint8_t *drogueEmatchState;
    uint8_t *mainEmatchState;
    uint8_t *armDrogueState;
    uint8_t *armMainState;
    uint8_t *gps1Good;
    float *gps1Latitude;
    float *gps1Longitude;
    float *gps1Altitude;
    uint8_t *gps1SatellitesTracked;
    uint8_t *acc1Good;
    float *acc1X;
    float *acc1Y;
    float *acc1Z;
    uint8_t *acc2Good;
    float *acc2X;
    float *acc2Y;
    float *acc2Z;
    uint8_t *gyro1Good;
    float *gyro1X;
    float *gyro1Y;
    float *gyro1Z;
    uint8_t *gyro2Good;
    float *gyro2X;
    float *gyro2Y;
    float *gyro2Z;
    uint8_t *mag1Good;
    float *mag1X;
    float *mag1Y;
    float *mag1Z;
    uint8_t *baro1Good;
    float *baro1Pressure;
    float *baro1Temperature;
    float *baro1Altitude;
    uint8_t *flashGood;
    float *flashWriteSpeed;
    float *availableMemory;
    uint8_t *gpsTrackingEnabled;
    float *gpsTrackingFrequency;
    uint8_t *streamPacketTypeEnabled;
    float *packetStreamFrequency;
    uint8_t *heartBeatEnabled;
    float *heartBeatChirpFrequency;
} systemStatePacketType0;

typedef struct
{
    // TBD
} systemStatePacketType1;

typedef struct
{
    // TBD
} systemStatePacketType2;

typedef struct
{
    // TBD
} systemStatePacketType3;

typedef struct
{
    // TBD
} systemStatePacketType4;

typedef struct
{
    // TBD
} systemStatePacketType5;

typedef struct
{
    // TBD
} systemStatePacketType6;

typedef struct
{
    // TBD
} systemStatePacketType7;

typedef struct
{
    uint8_t *enabled;
    float *minimumAngle;
    float *maximumAngle;
    float *currentDraw;
    uint16_t *positionDegrees;
} servo1State;

typedef struct
{
    uint8_t *enabled;
    float *minimumAngle;
    float *maximumAngle;
    float *currentDraw;
    uint16_t *positionDegrees;
} servo2State;

typedef struct
{
    uint8_t *enabled;
    float *minimumAngle;
    float *maximumAngle;
    float *currentDraw;
    uint16_t *positionDegrees;
} servo3State;

typedef struct
{
    uint8_t *enabled;
    float *minimumAngle;
    float *maximumAngle;
    float *currentDraw;
    uint16_t *positionDegrees;
} servo4State;

typedef struct
{
    uint8_t *enabled;
    float *minimumAngle;
    float *maximumAngle;
    float *currentDraw;
    uint16_t *positionDegrees;
} servo5State;

typedef struct
{
    uint8_t *enabled;
    float *minimumAngle;
    float *maximumAngle;
    float *currentDraw;
    uint16_t *positionDegrees;
} servo6State;

typedef struct
{
    uint8_t *enabled;
    uint8_t *homed;
    uint32_t *positionTicks;
    uint32_t *velocityTicksPerS;
    uint32_t *currentDraw;
    uint16_t *pwmDutyCycle;
} dcMotor1State;

typedef struct
{
    uint8_t *enabled;
    uint8_t *homed;
    uint32_t *positionTicks;
    uint32_t *velocityTicksPerS;
    uint32_t *currentDraw;
    uint16_t *pwmDutyCycle;
} dcMotor2State;

typedef struct
{
    uint8_t *enabled;
    uint8_t *homed;
    uint32_t *positionTicks;
    uint32_t *velocityTicksPerS;
    uint32_t *currentDraw;
    uint16_t *pwmDutyCycle;
} dcMotor3State;

typedef struct
{
    uint8_t *enabled;
    uint8_t *homed;
    uint32_t *positionTicks;
    uint32_t *velocityTicksPerS;
    uint32_t *currentDraw;
    uint16_t *pwmDutyCycle;
} dcMotor4State;

typedef struct
{
    uint16_t *rawADCValue;
    uint32_t *pressureMillibar;
} pressureSensor1State;

typedef struct
{
    uint16_t *rawADCValue;
    uint32_t *pressureMillibar;
} pressureSensor2State;

typedef struct
{
    uint16_t *rawADCValue;
    uint32_t *pressureMillibar;
} pressureSensor3State;

typedef struct
{
    uint16_t *rawADCValue;
    uint32_t *pressureMillibar;
} pressureSensor4State;

typedef struct
{
    uint16_t *rawADCValue;
    uint32_t *temperatureMilliKelvin;
} temperatureSensor1State;

typedef struct
{
    uint16_t *rawADCValue;
    uint32_t *temperatureMilliKelvin;
} temperatureSensor2State;

typedef struct
{
    uint16_t *rawADCValue;
    uint32_t *temperatureMilliKelvin;
} temperatureSensor3State;

typedef struct
{
    uint16_t *rawADCValue;
    uint32_t *temperatureMilliKelvin;
} temperatureSensor4State;

#endif /* IRIS_PROTOCOL_H */