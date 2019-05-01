/*******************************************************************
*
*
*
*******************************************************************/
/**
*
* @file		version.hpp
*
* @brief	Program version
*
* @version	1.0
*
* @author	C.Alan
*
* @date		May 01, 2019
*
********************************************************************/

#pragma once

#define VERSION_MAJOR 1
#define VERSION_MINOR 0
#define VERSION_PATCH 0
#define VERSION_BUILD 0

#define VERSION_NAME "1.0.0.0"
#define VERSION_CODE (VERSION_MAJOR * 10000 + VERSION_MINOR * 1000 + VERSION_PATCH * 100 + VERSION_BUILD)

#define BUILD_DATE __DATE__
#define BUILD_TIME __TIME__
#define BUILD_TIMESTAMP ___TIMESTAMP__
