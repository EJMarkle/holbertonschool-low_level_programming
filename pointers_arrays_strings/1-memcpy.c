#include "main.h"
#include <stdio.h>
/**
 * *_memcpy - copies n bytes from src to dest
 * Return: pointer to dest
 * @n: bytes of memory to be copied
 * @src: memory area to be copied from
 * @dest: memory area to be copied to
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_start = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (dest_start);
}
