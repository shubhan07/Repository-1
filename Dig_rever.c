/*
- Owner: Rushil Tolia
- PRN: 1262252066
- Batch: I2
- Description: This program takes a number as input and prints its digits in reverse order.
*/

#include <stdio.h>

int main()
{
    int num, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("Digits in reverse order: 0");
    }
    else
    {
        printf("Digits in reverse order: ");
        while (num != 0)
        {
            digit = num % 10;
            printf("%d ", digit);
            num = num / 10;
        }
    }

    return 0;
}