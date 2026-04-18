#include <stdio.h>

//Global variable:
int year;

//Main:
int main() {
	printf("Enter a year: "); //Prompt the user to enter a year
	scanf_s("%d", &year);
	//Check if the year is a leap year:
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		printf("%d is a leap year.\n", year);
	}
	else {
		printf("%d is not a leap year.\n", year);
	}
	return 0;
}
