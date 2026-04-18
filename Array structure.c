//Array of structure
#include <stdio.h>
struct student
{
    char name[20];
    int roll;
    float marks;
};
int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student s[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter name, roll and marks of student %d: ", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }
    printf("\nDetails of students:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", s[i].name, s[i].roll, s[i].marks);
    }
    return 0;
}