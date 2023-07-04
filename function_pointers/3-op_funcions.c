#include "main.h"
#include "3-calc.h"
/**
 * op_add - Returns the sum of two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: Sum of the two integers.
 */
int op_add(int a, int b);

/**
 * op_sub - Returns the difference of two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: Difference of the two integers.
 */
int op_sub(int a, int b);

/**
 * op_mul - Returns the product of two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: Product of the two integers.
 */
int op_mul(int a, int b);

/**
 * op_div - Returns the result of integer division.
 * @a: Numerator.
 * @b: Denominator.
 *
 * Return: Result of the integer division.
 */
int op_div(int a, int b);

/**
 * op_mod - Returns the remainder of integer division.
 * @a: Numerator.
 * @b: Denominator.
 *
 * Return: Remainder of the integer division.
 */
int op_mod(int a, int b);

/**
 * main - Performs simple operations on two integers.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: 0 on success, 98 for wrong number of arguments,
 *         99 for invalid operator, or 100 for division by zero.
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
	printf("Error\n");
	return (98);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char operator = argv[2][0];
	int result;

	switch (operator)
	{
	case '+':
	result = op_add(num1, num2);
	break;
	case '-':
	result = op_sub(num1, num2);
	break;
	case '*':
	result = op_mul(num1, num2);
	break;
	case '/':
	if (num2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	result = op_div(num1, num2);
	break;
	case '%':
	if (num2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	result = op_mod(num1, num2);
	break;
	default:
	printf("Error\n");
	return (99);
	}

	printf("%d\n", result);
	return (0);
}

int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b)
{
	return (a - b);
}

int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b)
{
	return (a / b);
}

int op_mod(int a, int b)
{
	return (a % b);
}

