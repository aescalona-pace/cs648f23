#include <stdio.h>

// 2. Function Definitions
int add(int a, int b) {
    return a + b;
}

// 3. Function Prototypes
// This is a prototype for the function multiply.
int multiply(int a, int b);

// 4. Parameter Passing
void modifyValue(int val) {
    val = val * 2;  // This modification won't reflect outside this function
}

// 5. Recursive Functions
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// 6. Functions and Arrays
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 7. Functions and Pointers
void doubleValue(int *ptr) {
    *ptr = *ptr * 2;
}

// 8. Functions Returning Pointers
// Note: Just a simple example. Returning local pointers is bad practice.
// int* badExampleReturningPointer() {
//     int local = 10;
//     return &local;  
// }

// 9. Inline Functions
// In a real scenario, the inline keyword suggests inlining, but the final decision is compiler's.
inline int subtract(int a, int b) {
    return a - b;
}

int main() {
    printf("add(5,3) = %d\n", add(5, 3));  
    printf("multiply(5,3) = %d\n", multiply(5, 3));

    int value = 5;
    modifyValue(value);
    printf("Value after modifyValue: %d\n", value);

    printf("factorial(5) = %d\n", factorial(5));

    int numbers[5] = {1, 2, 3, 4, 5};
    printArray(numbers, 5);

    doubleValue(&value);
    printf("Value after doubleValue: %d\n", value);

    // Skip calling badExampleReturningPointer() to avoid issues.

     printf("subtract(5,3) = %d\n", subtract(5, 3));

    return 0;
}

int multiply(int a, int b) {
    return a * b;
}
