#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int flag;

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	flag = 0;

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag || mask == 1)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
	if (flag == 0)
		_putchar('0');
}
