/*
- Owner: Shubhan Patnala
- PRN: 1262251314
- Batch: I2
- Description: This program generates the multiplication table for a given number.
*/

#include <stdio.h>

int main()
{
    int num, i;

    // Input from user
    printf("Enter a number to generate its multiplication table: ");
    scan_f("%d", &num);

    // Generate multiplication table
    printf("\nMultiplication Table of %d:\n", num);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
