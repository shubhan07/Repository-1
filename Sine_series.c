#include <stdio.h>
#include <math.h>

int main() {
    double x, terms, sum, term;
    int i;

    printf("Enter value of x (in radians): ");
    scanf("%lf", &x);

    printf("Enter number of terms: ");
    scanf("%lf", &terms);

    // Initializations
    sum = x;   // The first term of the series is 'x'
    term = x;  // This keeps track of the current term value

    /* Loop starts from 1 because the 0th term (x) is already in 'sum'.
       Each subsequent term (i) follows the pattern:
       Next Term = Previous Term * (-x^2) / ((2*i) * (2*i + 1))
    */
    for (i = 1; i < terms; i++) {
        term = term * (-1 * x * x) / ((2 * i) * (2 * i + 1));
        sum = sum + term;
    }

    printf("Sum of sine series = %lf\n", sum);

    return 0;
}