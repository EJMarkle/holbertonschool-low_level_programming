#include "main.h"
/**
 * main - prints the result of multiplying x and y
 * @argc: argument counter
 * @argv: argument array
 * Return: 0 if success 1 if error
 */

int main(int argc, char *argv[])
{
	int x;
	int y;
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	product = x * y;

	printf("%d\n", product);

	return (0);
}
