#include <stdio.h>

int main() {
    // Declare variables of different types
    char charVar;
    int intVar;
    float floatVar;
    double doubleVar;
    long longVar;
    short shortVar;

    // Print the sizes of the different types
    printf("Size of char: %zu bytes\n", sizeof(charVar));
    printf("Size of int: %zu bytes\n", sizeof(intVar));
    printf("Size of float: %zu bytes\n", sizeof(floatVar));
    printf("Size of double: %zu bytes\n", sizeof(doubleVar));
    printf("Size of long: %zu bytes\n", sizeof(longVar));
    printf("Size of short: %zu bytes\n", sizeof(shortVar));

    return 0;
}

