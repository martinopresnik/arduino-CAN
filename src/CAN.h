// Copyright (c) Sandeep Mistry. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#ifndef CAN_H
#define CAN_H


#ifdef ARDUINO_ARCH_ESP32
//#include "ESP32SJA1000.h"
#ifndef ESP32_EXTERNAL_CAN
//#define IGNORE_MCP2515
#endif
#endif

#include "MCP2515.h"

#endif
