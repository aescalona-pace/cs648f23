#include <stdio.h>

int main() {
    /* Basic Expressions */
    int a = 5;
    int b = 3;
    int result = a + b;
    printf("Result of a + b: %d\n", result);

    /* Arithmetic Operators */
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Modulus: %d\n", a % b);

    /* Relational and Equality Operators */
    printf("Is a > b? %d\n", a > b);
    printf("Is a == b? %d\n", a == b);

    /* Logical Operators */
    int c = 1; // true
    int d = 0; // false
    printf("Logical AND (c && d): %d\n", c && d);
    printf("Logical OR (c || d): %d\n", c || d);
    printf("Logical NOT (!c): %d\n", !c);

    /* Increment and Decrement Operators */
    a++;
    printf("Incremented value of a: %d\n", a);
    b--;
    printf("Decremented value of b: %d\n", b);

    /* Assignment Operators */
    a += 5; // equivalent to a = a + 5
    printf("Value after compound assignment: %d\n", a);

    /* Conditional (Ternary) Operator */
    int max = (a > b) ? a : b;
    printf("Maximum value between a and b: %d\n", max);

    /* Type Conversions */
    float f = 5.5;
    int converted = (int) f;
    printf("Converted float to int: %d\n", converted);

    /* Potential Pitfalls (showing only imprecision in floating-point arithmetic for brevity) */
    float sum = 0.1 + 0.2;
    printf("Sum of 0.1 and 0.2 as float: %f\n", sum);

    return 0;
}
