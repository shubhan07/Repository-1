#include <stdio.h>

// Defining the structure
struct Student {
    int roll_no;
    char name[50];
    int marks[3];
    int total;
    float percentage;
};

int main() {
    int n, i, j;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Array of structures
    struct Student s[n];

    // Input student details
    for(i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll_no);
        
        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks in 3 subjects: ");
        s[i].total = 0;
        for(j = 0; j < 3; j++) {
            scanf("%d", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }
        s[i].percentage = s[i].total / 3.0;
    }

    // Display student results
    printf("\n----------------------------------------");
    printf("\nSTUDENT RESULTS");
    printf("\n----------------------------------------");
    for(i = 0; i < n; i++) {
        printf("\nRoll No: %d", s[i].roll_no);
        printf("\nName: %s", s[i].name);
        printf("\nTotal Marks: %d", s[i].total);
        printf("\nPercentage: %.2f%%", s[i].percentage);
        printf("\n----------------------------------------");
    }

    return 0;
}