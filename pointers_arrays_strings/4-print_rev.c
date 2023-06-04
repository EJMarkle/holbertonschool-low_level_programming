#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints the supplied string in reverse
 * @s: the string to be reversed
 * Return: 0
 */

void print_rev(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	for (int i = l - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n')
}
