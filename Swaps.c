
#include <stdio.h>

// Function for Call by Value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue: a = %d, b = %d\n", a, b);
}

// Function for Call by Reference
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\nOriginal values: x = %d, y = %d\n", x, y);

    // 1. Swapping without pointers (Call by Value)
    printf("\n--- Call by Value --- \n");
    swapByValue(x, y);
    printf("After swapByValue in main: x = %d, y = %d (No change!)\n", x, y);

    // 2. Swapping with pointers (Call by Reference)
    printf("\n--- Call by Reference ---\n");
    swapByReference(&x, &y);
    printf("After swapByReference in main: x = %d, y = %d (Values changed!)\n", x, y);

    return 0;
}