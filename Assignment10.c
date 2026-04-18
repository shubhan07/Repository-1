#include <stdio.h>
#include <math.h>

// Menu
void displayMenu() {
    printf("          SIMPLE CALCULATOR MENU          \n");
    printf("  1. Addition       (x + y)\n");
    printf("  2. Subtraction    (x - y)\n");
    printf("  3. Multiplication (x * y)\n");
    printf("  4. Division       (x / y)\n");
    printf("  5. Power          (x ^ y)\n");
    printf("  6. Factorial      (x!)\n");
    printf("  0. Exit\n");
    printf("==========================================\n");
    printf("  Enter your choice: ");
}

// Addition
float addition(float x, float y) {
    return x + y;
}

// Subtraction
float subtraction(float x, float y) {
    return x - y;
}

// Multiplication
float multiplication(float x, float y) {
    return x * y;
}

// Division
float division(float x, float y) {
    if (y == 0) {
        printf("\n  Error: Division by zero is not allowed.\n");
        return 0;
    }
    return x / y;
}

// Power
double power(float x, float y) {
    return pow(x, y);
}

// Factorial
long long factorial(int n) {
    if (n < 0) {
        printf("\n  Error: Factorial is not defined for negative numbers.\n");
        return -1;
    }
    long long result = 1;
    int i;
    for (i = 2; i <= n; i++)
        result *= i;
    return result;
}

/* Main function: drives the menu and calls appropriate operation functions */
int main() {
    int choice;
    float x, y;

    printf("\n==========================================");
    printf("\n     WELCOME TO THE SIMPLE CALCULATOR     ");
    printf("\n==========================================\n");

    do {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("  Enter two numbers: ");
                scanf("%f %f", &x, &y);
                printf("  Result = %.2f\n", addition(x, y));
                break;

            case 2:
                printf("  Enter two numbers: ");
                scanf("%f %f", &x, &y);
                printf("  Result = %.2f\n", subtraction(x, y));
                break;

            case 3:
                printf("  Enter two numbers: ");
                scanf("%f %f", &x, &y);
                printf("  Result = %.2f\n", multiplication(x, y));
                break;

            case 4:
                printf("  Enter two numbers: ");
                scanf("%f %f", &x, &y);
                if (y != 0)
                    printf("  Result = %.2f\n", division(x, y));
                else
                    division(x, y);
                break;

            case 5:
                printf("  Enter base (x) and exponent (y): ");
                scanf("%f %f", &x, &y);
                printf("  Result = %.2f\n", power(x, y));
                break;

            case 6: {
                int n;
                printf("  Enter a non-negative integer: ");
                scanf("%d", &n);
                long long fact = factorial(n);
                if (fact >= 0)
                    printf("  Result = %lld\n", fact);
                break;
            }

            case 0:
                printf("\n  Exiting Calculator. Goodbye!\n");
                printf("==========================================\n\n");
                break;

            default:
                printf("\n  Invalid choice! Please enter 0 to 6.\n");
        }

    } while (choice != 0);

    return 0;
}
