#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints 0-14 10 times
 * Return: 0
 */

void more_numbers(void)
{
int n;
int c;

for (c = 0; c <= 10; c++)
{
	for (n = 0; n <= 14; n++)
	{
		if (n > 9)
		{
			_putchar('0' + (n / 10));
		}
		_putchar('0' + (n % 10));
	}
	_putchar('\n');
}
}
