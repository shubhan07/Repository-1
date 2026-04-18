
//Factorial iterative and non-iterative.
#include <stdio.h>
int fact_iter(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
int fact_non_iter(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fact_non_iter(n - 1);
}
int main() {
    int number;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &number);
    
    int iter_result = fact_iter(number);
    int non_iter_result = fact_non_iter(number);
    
    printf("Factorial of %d (iterative): %d\n", number, iter_result);
    printf("Factorial of %d (non-iterative): %d\n", number, non_iter_result);
    
    return 0;
}
