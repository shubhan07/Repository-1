//Calculate fibonacci numbers using recursive
int fib(int n) {
    if (n <= 1) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}
int main() {
    printf("Enter the Fibonacci number to calculate: ");
    int n;
    scanf("%d", &n);
    printf("The %dth Fibonacci number is: %d\n", n, fib(n));
    return 0;
}