#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes of memory to be allocated
 * Return: pointer to allocated memory, NULL if fail
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
