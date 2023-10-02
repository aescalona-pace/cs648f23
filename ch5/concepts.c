#include <stdio.h>

int main() {
    // 1. Control Flow: Already implicit in the structure of the main function and the statements.

    // 2. If Statements
    int x = 5;
    if (x > 3) {
        printf("x is greater than 3\n");
    } else if (x < 3) {
        printf("x is less than 3\n");
    } else {
        printf("x is equal to 3\n");
    }

    // 3. Switch Statements
    int day = 3;
    switch(day) {
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        // ... other days ...
        default: printf("Invalid day\n");
    }

    // 4. While Loops
    int count = 0;
    while(count < 3) {
        printf("Count: %d\n", count);
        count++;
    }

    // 5. For Loops
    for(int i = 0; i < 3; i++) {
        printf("i: %d\n", i);
    }

    // 6. Do-While Loops
    int start = 0;
    do {
        printf("Start: %d\n", start);
        start++;
    } while(start < 2);

    // 7. Break and Continue
    for(int j = 0; j < 5; j++) {
        if(j == 2) {
            continue;
        }
        if(j == 4) {
            break;
        }
        printf("j: %d\n", j);
    }

    // 8. Goto and Labels (Usage not recommended)
    int y = 0;
    print_y:
        if(y < 3) {
            printf("y: %d\n", y);
            y++;
            goto print_y;
        }

    // 9. Boolean Expressions: Used in all conditional statements above.

    // 10. Common Pitfalls: Not demonstrated, but watch out for infinite loops, misplaced semicolons, etc.

    return 0;
}
