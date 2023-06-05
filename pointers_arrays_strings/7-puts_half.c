#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints half of a string
 * @str: the string to print half of
 * Return: 0
 */

void puts_half(char *str)
{
	int a = 0;
	int b = 0;

	while (str[a] != '\0')
	{
		b++;
		a++;
	}
	if
	(b % 2 == 0)
	a = b / 2;
	while
	(str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
