#ifndef _MISCDEF_
#define _MISCDEF_

#include <Arduino.h>

#ifdef SERIAL_DEBUG

#define DEBUG(X) X

#else

#define DEBUG(X)

#endif

void printBuffer(const byte* ptr, size_t size, uint8_t base = HEX);

#define DEBUG_PRINT_LN(X) DEBUG(Serial.println(X);)

#define DEBUG_PRINT(X) DEBUG(Serial.print(X);)

#define DEBUG_PRINT_VALUE(X, Y) DEBUG(Serial.print(X);Serial.print(" : ");Serial.println(Y);)

#define DEBUG_PRINT_BUF(PTR, SIZE) DEBUG(printBuffer(PTR, SIZE);)

#define DEBUG_PRINT_BUF_LN(PTR, SIZE) DEBUG_PRINT_BUF(PTR, SIZE) DEBUG(Serial.println();)

#define DEBUG_PRINT_VALUE_BUF(NAME, PTR, SIZE) DEBUG_PRINT(NAME) DEBUG_PRINT(" : ") DEBUG_PRINT_BUF(PTR, SIZE)

#define DEBUG_PRINT_VALUE_BUF_LN(NAME, PTR, SIZE) DEBUG_PRINT_VALUE_BUF(NAME, PTR, SIZE) DEBUG_PRINT_LN("")

#endif