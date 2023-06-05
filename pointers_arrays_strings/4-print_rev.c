#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints the supplied string in reverse
 * @s: the string to be reversed
 * Return: 0
 */

void print_rev(char *s)
{
	int length = strlen(s);

	while (length > 0)
	{
		_putchar(s[length - 1]);
		length--;
	}
	_putchar('\n');
}
