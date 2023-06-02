#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - prints a...diag?
 * @n: number of times a \ is printed
 * Return: 0
 */
void print_diagonal(int n)
{
int i;
int l;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (l = 0; l < i; l++)
			{
			_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
}
