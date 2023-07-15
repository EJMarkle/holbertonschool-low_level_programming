#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int bitmask;
	int bitsize;

	/* set bitsize to size of us long int */
	/* 8 bits in a byte, so we multiply by 8 to find bits */
	bitsize = sizeof(unsigned long int) * 8;

	/* start mask at leftmost bit */
	/* 1 = int literal UL = unsigned long int */
	/* bitsize - 1 calcs position of leftmost bit */
	bitmask = 1UL << (bitsize - 1);

	/* check bits from left to right */
	while (bitmask > 0)
	{
		/* if bit is 1, print 1. else print 0 */
		if (n & bitmask)
			_putchar('1');
		else
			_putchar('0');

		/* shift mask 1 bit to the right */
		bitmask = bitmask >> 1;
	}
}
