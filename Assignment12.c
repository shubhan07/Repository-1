#include <stdio.h>

int main()
{
    int a, b, i, gcd, temp;
    int smallestDivisor = 0;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Finding smallest common divisor (other than 1)
    for (i = 2; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            smallestDivisor = i;
            break;
        }
    }

    if (smallestDivisor != 0)
        printf("\nSmallest Common Divisor: %d", smallestDivisor);
    else
        printf("\nNo common divisor other than 1");

    // Euclidean Algorithm for GCD
    int x = a, y = b;
    while (y != 0)
    {
        temp = y;
        y = x % y;
        x = temp;
    }
    gcd = x;

    printf("\nGreatest Common Divisor (GCD): %d", gcd);

    return 0;
}
