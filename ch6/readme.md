# Chapter 6: Loops in C

In Chapter 6 of "C Programming: A Modern Approach" by K. N. King, loops in the C programming language are explored in depth. Here's a summarized breakdown:

## Topics Covered:

### 1. **Introduction to Loops**
- The foundational concept that allows repetitive execution of code segments, helping avoid redundancy.

### 2. **While Loops**
Executing a block of code as long as a specified condition remains true.
```c
int count = 0;
while(count < 5) {
    printf("Count: %d\n", count);
    count++;
}
```

### 3. **For Loops**
Used especially when the number of iterations is predetermined.
```c
for(int i = 0; i < 5; i++) {
    printf("i: %d\n", i);
}
```

### 4. **Do-While Loops**

A variation of the while loop that ensures the loop body is executed at least once.
```c
int start = 0;
do {
    printf("Start: %d\n", start);
    start++;
} while(start < 3);
```

### 5. **Nested Loops**

Looping structures within another loop, commonly used for multidimensional arrays or complex iteration requirements.
```c
#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3; j++) {
            printf("%d %d\n", i, j);
        }
    }

    return 0;
}
```   

The output will be:
```c
1 1
1 2
1 3
2 1
2 2
2 3
3 1
3 2
3 3

```

### 6. **Infinite Loops**

An exploration of unintentional loop scenarios where termination conditions are never met, leading to endless iterations. Care should be taken to avoid these in practical applications as they can lead to system hang-ups or excessive resource usage.
```c
#include <stdio.h>

int main() {
    while (1) {  // This condition is always true
        printf("This is an infinite loop!\n");
    }

    return 0;  // This line will never be reached
}

```
This code will continuously print "This is an infinite loop!" until it's manually terminated by the user.