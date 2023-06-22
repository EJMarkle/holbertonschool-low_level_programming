#include "main.h"
/**
 * _calloc - allocated memory for an array
 * @nmemb: number of elements
 * @size: bytes of each element
 * Return: pointer to allocated memory, NULL if fail
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_sizes;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_sizes = nmemb * size;

	ptr = malloc(total_sizes);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, total_sizes);

	return (ptr);
}
