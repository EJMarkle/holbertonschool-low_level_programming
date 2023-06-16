#include "main.h"
#include <stdio.h>
/**
 * main - prints it's name followed by a new line
 * @argv: array containing program name
 * @argc: argument count
 * Return: 0 if succesful
 */

int main(int argc, char *argv[])
{
	(void)argc; /* unused param */
	printf("%s\n", argv[0]);
	return (0);
}
