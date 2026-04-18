#include <stdio.h>
#include <math.h>

int isValidBinary(long long num) {
    long long temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        if (digit != 0 && digit != 1)
            return 0;
        temp /= 10;
    }
    return 1;
}

// Binary to Decimal
long long binaryToDecimal(long long binary) {
    long long decimal = 0;
    int position = 0;

    while (binary > 0) {
        int bit = binary % 10;
        decimal += bit * (long long)pow(2, position);
        binary /= 10;
        position++;
    }
    return decimal;
}

int main() {
    long long binary;

    printf("\n    BINARY TO DECIMAL CONVERSION          ");
    printf("\n  Enter a binary number: ");
    scanf("%lld", &binary);

    if (!isValidBinary(binary)) {
        printf("\n  Error: Invalid binary number!");
        printf("\n  Please enter a number containing only 0s and 1s.\n");
    } else {
        long long decimal = binaryToDecimal(binary);
        printf("\n  Decimal equivalent = %lld\n", decimal);
    }


    return 0;
}
