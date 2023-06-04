#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints the supplied string in reverse
 * @s: the string to be reversed
 * Return: 0
 */

void print_rev(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	print_rev(s + 1);
	_putchar(*s);
	_putchar('\n');
}
