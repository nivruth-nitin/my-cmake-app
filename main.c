#include <stdio.h>
#include "math_utils.h"
#include "string_utils.h"

int main(void) {
    printf("=== CMake C Application Example ===\n\n");
    
    // Test math utilities
    int a = 10, b = 5;
    printf("Math Operations:\n");
    printf("  %d + %d = %d\n", a, b, add(a, b));
    printf("  %d * %d = %d\n", a, b, multiply(a, b));
    printf("  %d! = %d\n", 5, factorial(5));
    
    // Test string utilities
    printf("\nString Operations:\n");
    const char *test_str = "Hello, CMake!";
    printf("  Original: %s\n", test_str);
    printf("  Length: %d\n", string_length(test_str));
    printf("  Uppercase: ");
    print_uppercase(test_str);
    
    return 0;
}