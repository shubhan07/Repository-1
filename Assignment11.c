/*
- Owner: Shubhan Patnala
- PRN: 1262251314
- Batch: I2
- Description: This program checks if a given year is a leap year or not.
*/

//Libraries Included:
#include <stdio.h>
#include <math.h>

//Main:
int main()
{
    int n, choice, i, isPrime = 1;
    long long fact = 1;

    printf("Enter a number: ");
    scanf_s("%d", &n);

    //Display Menu
    printf("\nMenu:");
    printf("\n1. Square Root");
    printf("\n2. Square");
    printf("\n3. Cube");
    printf("\n4. Check Prime");
    printf("\n5. Factorial");
    printf("\n6. Prime Factors");
    printf("\nEnter your choice: ");
    scanf_s("%d", &choice);


    //Switch Case
    switch (choice)
    {
    case 1:
        if (n < 0)
            printf("Square root of negative number is not defined.");
        else
            printf("Square Root = %.2f", sqrt(n));
        break;

    case 2:
        printf("Square = %d", n * n);
        break;

    case 3:
        printf("Cube = %d", n * n * n);
        break;

    case 4:
        if (n <= 1)
            isPrime = 0;

        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("%d is a Prime Number", n);
        else
            printf("%d is not a Prime Number", n);
        break;

    case 5:
        if (n < 0)
        {
            printf("Factorial of negative number is not defined.");
        }
        else
        {
            for (i = 1; i <= n; i++)
                fact *= i;
            printf("Factorial = %lld", fact);
        }
        break;

    case 6:
        printf("Prime Factors of %d are: ", n);
        for (i = 2; i <= n; i++)
        {
            while (n % i == 0)
            {
                printf("%d ", i);
                n /= i;
            }
        }
        break;

    default:
        printf("Invalid Choice");
    }

    return 0;
}
