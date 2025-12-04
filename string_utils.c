#include "string_utils.h"
#include <stdio.h>
#include <ctype.h>

int string_length(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void print_uppercase(const char* str) {
    while (*str) {
        putchar(toupper(*str));
        str++;
    }
    putchar('\n');
}