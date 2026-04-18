#include <stdio.h>
#include <string.h>

struct EMPLOYEE {
    char name[50];
    char designation[50];
    char gender[10]; 
    char doj[15];
    float salary;
};

// Total number of employees
void countTotal(int n) {
    printf("\n  Total number of employees = %d\n", n);
}

// Count Male and Female employees
void countGender(struct EMPLOYEE emp[], int n) {
    int male = 0, female = 0, i;
    for (i = 0; i < n; i++) {
        if (stricmp(emp[i].gender, "male") == 0)
            male++;
        else if (stricmp(emp[i].gender, "female") == 0)
            female++;
    }
    printf("  Male employees   = %d\n", male);
    printf("  Female employees = %d\n", female);
}

// Employees with salary > 10000
void salaryAbove10000(struct EMPLOYEE emp[], int n) {
    int i, found = 0;
    printf("\n  Employees with salary more than 10,000:\n");
    for (i = 0; i < n; i++) {
        if (emp[i].salary > 10000) {
            printf("    -> %-20s | %-20s | Salary: %.2f\n",
                   emp[i].name, emp[i].designation, emp[i].salary);
            found++;
        }
    }
    if (!found)
        printf("    (None)\n");
}

// Employees with designation "Asst Manager"
void findAsstManager(struct EMPLOYEE emp[], int n) {
    int i, found = 0;
    printf("\n  Employees with designation 'Asst Manager':\n");
    for (i = 0; i < n; i++) {
        if (stricmp(emp[i].designation, "asst manager") == 0) {
            printf("    -> %-20s | DOJ: %s | Salary: %.2f\n",
                   emp[i].name, emp[i].doj, emp[i].salary);
            found++;
        }
    }
    if (!found)
        printf("    (None)\n");
}

// Helper: Print divider
void printDivider() {
    printf("\n  --------------------------------------------------\n");
}

//Main
int main() {
    int n, i;

    printf("\n==================================================");
    printf("\n      EMPLOYEE MANAGEMENT SYSTEM - Assignment 19  ");
    printf("\n==================================================\n");

    printf("\n  Enter number of employees: ");
    scanf("%d", &n);
    getchar();

    struct EMPLOYEE emp[n];

    for (i = 0; i < n; i++) {
        printf("\n  --- Employee %d ---\n", i + 1);

        printf("  Name            : ");
        fgets(emp[i].name, sizeof(emp[i].name), stdin);
        emp[i].name[strcspn(emp[i].name, "\n")] = '\0';

        printf("  Designation     : ");
        fgets(emp[i].designation, sizeof(emp[i].designation), stdin);
        emp[i].designation[strcspn(emp[i].designation, "\n")] = '\0';

        printf("  Gender (Male/Female): ");
        fgets(emp[i].gender, sizeof(emp[i].gender), stdin);
        emp[i].gender[strcspn(emp[i].gender, "\n")] = '\0';

        printf("  Date of Joining (DD-MM-YYYY): ");
        fgets(emp[i].doj, sizeof(emp[i].doj), stdin);
        emp[i].doj[strcspn(emp[i].doj, "\n")] = '\0';

        printf("  Salary          : ");
        scanf("%f", &emp[i].salary);
        getchar();
    }

    printDivider();
    printf("\n              *** RESULTS ***\n");
    printDivider();
    countTotal(n);

    countGender(emp, n);

    salaryAbove10000(emp, n);

    findAsstManager(emp, n);

    printDivider();
    printf("\n");

    return 0;
}
