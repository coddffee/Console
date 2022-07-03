#include <stdio.h>
#include "console.h"

int main(void) {
    Console console = NewConsole();
    console.print("test for console : %s.\r\n", "hello");
    return 0;
}