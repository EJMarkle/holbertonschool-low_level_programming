#include "main.h"
#include <stdio.h>
/**
 * print_triangle - print triangle
 * Return: 0
 * @size: size 'o trangle
 */
void print_triangle(int size)
{
int i;
int k;
int s;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= size; i++)
	{
		s = size - i;

		for (k = 1; k <= s; k++)
		{
			_putchar(' ');
		}
		for (k = 1; k <= i; k++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
