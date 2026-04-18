#include <stdio.h>

//Global Variables:
int user_int1;
int user_int2;
int result;
int user_op;

//Main:
void main()
{
	printf("Enter first no: ");
	scanf_s_s("%d", &user_int1);
	printf("Enter second no: ");
	scanf_s_s("%d", &user_int2);
	printf("Enter operation to be performed(1 => +, 2 => -, 3 => *, 4 => /, 5 => %): ");
	scanf_s_s("%d", &user_op);
	calc_operations(user_int1, user_int2, user_op);
	printf("The result is: %d", result);
}

int calc_operations(num1, num2, op)
{
	switch (op) {
	case 1:
		result = num1 + num2;
		break;
	case 2:
		result = num1 - num2;
		break;
	case 3:
		result = num1 * num2;
		break;
	case 4:
		result = num1 / num2;
		break;
	case 5:
		result = num1 % num2;
		break;
	default:
		//Loop back to the main input section and ask the user to enter valid operation
		printf("Invalid operation. Please try again.\n");
		main();
		break;
	};
	return result;
}
