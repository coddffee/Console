#include <stdio.h>
#include <stdlib.h>
#include "console.h"

#define FIELDS_BYTE_SIZE sizeof(int)

static const Console NULL_CONSOLE = {0};

Console NewConsole() {
    Console console = {0};
    console.FIELDS = (uint8_t*)malloc(FIELDS_BYTE_SIZE);
    if(console.FIELDS == 0) {
        return NULL_CONSOLE;
    }
    console.print = printf;
    return console;
}