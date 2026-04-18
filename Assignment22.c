#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
void printDivider() {
    printf("\n------------------------------------------\n");
}
 
void displayMenu() {
    printDivider();
    printf("     STRING OPERATIONS MENU\n");
    printDivider();
    printf(" 1. Find Length of String\n");
    printf(" 2. Copy String (strcpy)\n");
    printf(" 3. Concatenate Strings (strcat)\n");
    printf(" 4. Compare Strings (strcmp)\n");
    printf(" 5. Reverse a String (strrev logic)\n");
    printf(" 6. Convert to Uppercase (toupper)\n");
    printf(" 7. Convert to Lowercase (tolower)\n");
    printf(" 8. Search Substring (strstr)\n");
    printf(" 0. Exit\n");
    printDivider();
    printf(" Enter your choice: ");
}

 
int main() {
    char str1[200], str2[200], str3[200], *result;
    int choice, cmpResult;
 
    printf("\n==========================================");
    printf("\n  MENU DRIVEN PROGRAM: STRING OPERATIONS  ");
    printf("\n==========================================\n");
 
    printf("\nEnter String 1: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
 
    printf("Enter String 2: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
 
    do {
        displayMenu();
        scanf("%d", &choice);
        getchar();
 
        switch (choice) {
 
            // Length
            case 1:
                printf("\n[strlen]\n");
                printf("  Length of \"%s\" = %zu\n", str1, strlen(str1));
                printf("  Length of \"%s\" = %zu\n", str2, strlen(str2));
                break;
 
            // Copy
            case 2:
                strcpy(str3, str1);
                printf("\n[strcpy]\n");
                printf("  Copied String 1 into str3.\n");
                printf("  str3 = \"%s\"\n", str3);
                break;
 
            // Cpncatenate
            case 3:
                strcpy(str3, str1);
                strcat(str3, str2);
                printf("\n[strcat]\n");
                printf("  str1 + str2 = \"%s\"\n", str3);
                break;
 
            // Compare
            case 4:
                cmpResult = strcmp(str1, str2);
                printf("\n[strcmp]\n");
                if (cmpResult == 0)
                    printf("  \"%s\" == \"%s\"  (strings are EQUAL)\n", str1, str2);
                else if (cmpResult < 0)
                    printf("  \"%s\" < \"%s\"  (str1 comes BEFORE str2)\n", str1, str2);
                else
                    printf("  \"%s\" > \"%s\"  (str1 comes AFTER str2)\n", str1, str2);
                break;
 
            // Reverse
            case 5:
                strcpy(str3, str1);
                strrev(str3);
                printf("\n[strrev]\n");
                printf("  Original : \"%s\"\n", str1);
                printf("  Reversed : \"%s\"\n", str3);
                break;
 
            // Uppercase
            case 6: {
                int i;
                strcpy(str3, str1);
                for (i = 0; str3[i]; i++)
                    str3[i] = toupper((unsigned char)str3[i]);
                printf("\n[strupr / toupper]\n");
                printf("  Original  : \"%s\"\n", str1);
                printf("  Uppercase : \"%s\"\n", str3);
                break;
            }
 
            // Lowercase
            case 7: {
                int i;
                strcpy(str3, str1);
                for (i = 0; str3[i]; i++)
                    str3[i] = tolower((unsigned char)str3[i]);
                printf("\n[strlwr / tolower]\n");
                printf("  Original  : \"%s\"\n", str1);
                printf("  Lowercase : \"%s\"\n", str3);
                break;
            }
 
            // Substring Search
            case 8:
                result = strstr(str1, str2);
                printf("\n[strstr] Searching \"%s\" in \"%s\"\n", str2, str1);
                if (result)
                    printf("  Found at position %ld : \"%s\"\n",
                           result - str1, result);
                else
                    printf("  Substring NOT found.\n");
                break;
 
            // Exit
            case 0:
                printf("\n  Exiting... Goodbye!\n");
                printDivider();
                break;
 
            default:
                printf("\n  Invalid choice! Please enter 0-8.\n");
        }
 
    } while (choice != 0);
 
    return 0;
}
