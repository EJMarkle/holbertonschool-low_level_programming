#include "main.h"
/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: pointer to number whose bit is to be set
 * @index: index of bit to set starting at 0
 * Return: 1 if success, -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	/* checks if index is out of range */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	/* creates bitmask with only the bit at the index set to 1 */
	mask = 1UL << index;
	/* use bitwise OR to set bit at index to 1 */
	*n = (*n) | mask;

	return (1);
}
