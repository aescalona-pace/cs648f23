// This is a sample C program based on Chapter 2 concepts
// gcc concepts.c -o main     
#include <stdio.h> // Necessary for printf and scanf functions

int main(void) { // Entry point of the program
    // Declare variables
    int integerVar;
    float floatVar;
    double doubleVar;
    char charVar;

    // Get input from the user
    printf("Enter an integer: ");
    scanf("%d", &integerVar);

    printf("Enter a float: ");
    scanf("%f", &floatVar);

    printf("Enter a double: ");
    scanf("%lf", &doubleVar); // Note: %lf is used for reading a double

    printf("Enter a character: ");
    scanf(" %c", &charVar); // Note the space before %c to consume any leftover newline character

    // Perform arithmetic operations
    integerVar++;  // Increment integer
    floatVar /= 2; // Halve the float value

    // Display results
    printf("Incremented integer: %d\n", integerVar);
    printf("Halved float: %f\n", floatVar);
    printf("Inputted double: %lf\n", doubleVar);
    printf("Inputted character: %c\n", charVar);

    return 0; // End of the program
}
