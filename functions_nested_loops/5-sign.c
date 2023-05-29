#include "main.h"
/**
 * print_sign - prints a chars sign
 * Return: 1 and prints + if n > 0, 0 and print 0 if n is 0, -1 and
 * print - if n is less than 0
 * @n: num  to check
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
