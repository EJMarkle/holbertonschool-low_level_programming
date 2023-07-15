#include "main.h"
/**
 * get_bit - gets the value of a bit at a given index
 * @n: number to get bit from
 * @index: index starting at 0
 * Return: value of bit at index or -1 if error
 */

int get_bit(unsigned long int n, unsingned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
