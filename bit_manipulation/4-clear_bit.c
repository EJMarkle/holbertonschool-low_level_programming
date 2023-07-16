#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @index: bit to be set
 * @n: pointer to the number whose bit must be cleared
 * Return: 1 if success, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask;

	/* checks if index is out of range */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	/* creates bitmask with only the bit at the index set to 0 */
	bitmask = ~(1UL << index);
	/* bitise AND to clear the bit at index to 0 */
	*n = (*n) & bitmask;

	return (1);
}
