#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[10];
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            str[i] = '*';
        }
    }
    
    printf("Modified string: %s", str);
    
    return 0;
}   