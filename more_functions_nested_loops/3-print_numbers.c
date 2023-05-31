#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_numbers - prints 0 to 9 followed by new line
 * Return: 0
 */
void print_numbers(void)
{
	char n;

	for (n = 0; n <= 10;n++);
	{
	_putchar(n);
	}
	_putchar('\n');
}
