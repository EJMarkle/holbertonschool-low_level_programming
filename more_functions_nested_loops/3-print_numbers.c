#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_numbers - prints 0 to 9 followed by new line
 * Return: 0
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0' + n);
	}
	_putchar('\n');
}
