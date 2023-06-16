#include "main.h"
/**
 * main - prints # of arguments passed into itself
 * @argc: num of arguments
 * @argv: array of arguments
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
