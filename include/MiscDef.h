#ifndef _MISCDEF_
#define _MISCDEF_

#include <Arduino.h>

#define SERIAL_DEBUG 1

#if SERIAL_DEBUG

#define DEBUG(X) X

void printBuffer(byte* ptr, size_t size, uint8_t base = HEX);

#else

#define DEBUG(X)

#endif

#define DEBUG_PRINT_LN(X) DEBUG(Serial.println(X);)
#define DEBUG_PRINT(X) DEBUG(Serial.print(X);)
#define DEBUG_PRINT_VALUE(X, Y) DEBUG(Serial.print(X);Serial.print(" : ");Serial.println(Y);)

#endif