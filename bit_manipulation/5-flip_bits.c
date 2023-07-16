#include "main.h"
/**
 * flip_bits - returns the number of bits needed to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: num of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	/* count num of set bits in the XOR result */
	while (xor_result != 0)
	{
		/* increment count if least significant bit is set */
		count += xor_result & 1;
		/* right shift xor_result to check the next bit */
		xor_result >>= 1;
	}
	return (count);
}
