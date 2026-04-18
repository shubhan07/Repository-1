#include <stdio.h>
#include <stdlib.h> // Required for rand() and srand()
#include <time.h>   // Required for time()

int main() {
    int n, i;

    // Use current time as a seed for random generator
    srand(time(0));

    printf("Enter how many random numbers you want: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Pseudo Random Numbers:\n\n");

    for (i = 0; i < n; i++) {
        /* rand() generates a large number. 
           To limit it (e.g., between 0-99), use: rand() % 100 
        */
        printf("%d\n", rand());
    }

    return 0;
}
