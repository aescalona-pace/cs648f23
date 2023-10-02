#include <stdio.h>

int main() {
    // 1. Introduction to Arrays
    int arr[5];

    // 2. Declaring Arrays
    int numbers[5] = {1, 2, 3, 4, 5};

    // 3. Accessing Array Elements
    printf("First element: %d\n", numbers[0]);

    // 4. Length of an Array
    int length = sizeof(numbers) / sizeof(numbers[0]);
    printf("Length of the array: %d\n", length);

    // 5. Reading and Writing Arrays
    for(int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, numbers[i]);
    }

    // 6. Arrays and Functions
    // Assuming a function "printArray" which takes an array and its size.
    // void printArray(int arr[], int size);

    // 7. Multidimensional Arrays
    int matrix[2][2] = {
        {1, 2},
        {3, 4}
    };
    printf("Matrix element [1][1]: %d\n", matrix[1][1]);

    // 8. Variable-Length Arrays (VLAs)
    int n = 3;
    int variableArray[n];
    for (int i = 0; i < n; i++) {
        variableArray[i] = i * 2;
    }

    // 9. Array of Characters
    char hello[] = "Hello, world!";
    printf("%s\n", hello);
    
    return 0;
}
