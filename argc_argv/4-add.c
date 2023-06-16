#include "main.h"
/**
 * is_digit - determines if input is a positive number
 * @c: char to be checked
 * Return: 1 if positive number
 */

int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * main - adds positive numbers and prints the result
 * @argc: argument counter
 * @argv: argument array
 * Return: 1 if succesful, 0 if error
 */

int main(int argc, char *argv[])
{
	int i;
	int num;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		int j = 0;

		while (argv[i][j] != '\0')
		{
			if (!is_digit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		num = atoi(argv[i]);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
