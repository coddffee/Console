#ifndef _CONSOLE_H
#define _CONSOLE_H

#include <stdint.h>

typedef struct Console {
    uint8_t* FIELDS;
    int (*print)(const char* format, ...);
} Console;

Console NewConsole();

#endif