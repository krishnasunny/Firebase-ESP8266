#ifndef FirebaseFS_H
#define FirebaseFS_H
#include <Arduino.h>

#define FIREBASE_ESP8266_CLIENT 1

/**
 * To use other flash file systems
 * 
 * LittleFS File system
 * 
 * #include <LittleFS.h>
 * #define DEFAULT_FLASH_FS LittleFS //For ESP8266 LitteFS
 * 
 * 
 * FAT File system
 * 
 * #include <FFat.h>
 * #define DEFAULT_FLASH_FS FFat  //For ESP32 FAT
 * 
*/
#define DEFAULT_FLASH_FS SPIFFS

/**
 * To use SD card file systems with different hardware interface
 * e.g. SDMMC hardware bus on the ESP32
 * https://github.com/espressif/arduino-esp32/tree/master/libraries/SD#faq
 * 
 * #include <SD_MMC.h>
 * #define DEFAULT_SD_FS SD_MMC //For ESP32 SDMMC
 * 
*/
#define DEFAULT_SD_FS SD

//Comment to exclude the Firebase Realtime Database
#define ENABLE_RTDB

//Comment to exclude Firebase Cloud Messaging
#define ENABLE_FCM

#endif