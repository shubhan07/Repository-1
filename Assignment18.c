#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], rev[100];
    int length, i, flag = 0;

    printf("Enter a string: ");
    scanf("%s", str1);

    // i) Calculate length
    length = strlen(str1);
    printf("Length of string = %d\n", length);

    // ii) String reversal
    for (i = 0; i < length; i++) {
        rev[i] = str1[length - i - 1];
    }
    rev[length] = '\0'; // Null terminate the reversed string
    printf("Reversed string = %s\n", rev);

    // iii) Equality check
    printf("Enter another string for equality check: ");
    scanf("%s", str2);

    if (strcmp(str1, str2) == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

    // iv) Check palindrome
    if (strcmp(str1, rev) == 0) {
        printf("The string is a Palindrome\n");
    } else {
        printf("The string is not a Palindrome\n");
    }

    // v) Check substring
    // strstr returns a pointer to the first occurrence or NULL if not found
    if (strstr(str1, str2) != NULL) {
        printf("Substring found in main string\n");
    } else {
        printf("Substring not found\n");
    }

    return 0;
}
