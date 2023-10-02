#include <stdio.h>

int main(void) {
    /* The printf Function */
    printf("Hello, World!\n");

    /* Format Specifiers */
    int integerVar = 42;
    float floatVar = 3.14;
    char charVar = 'A';
    char strVar[] = "Hello";

    printf("Integer: %d\n", integerVar);
    printf("Float: %f\n", floatVar);
    printf("Character: %c\n", charVar);
    printf("String: %s\n", strVar);

    /* Flags and Field Widths */
    printf("Field width for float: %8.2f\n", floatVar);
    printf("Integer with leading zeros: %05d\n", integerVar);

    /* Precision with Floating-Point Numbers */
    printf("Precision for float: %.3f\n", floatVar);

    /* Escape Sequences */
    printf("This is a tab:\tHello\n");
    printf("This is a newline:\nHello\n");

    /* Miscellaneous */
    double doubleVar = 123.456789;
    printf("Using # with float: %#.2f\n", floatVar);
    printf("Using * for width and precision: %*.*f\n", 10, 3, doubleVar);

    return 0;
}
