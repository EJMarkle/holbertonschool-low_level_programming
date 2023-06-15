#include "main.h"
#include <stdio.h>
/**
 * _memset - fills n bytes of mem area pointed to by s with the
 * the constant byte b
 * Return: Pointers to the area s
 * @b: constant byte
 * @s: memory area pointer
 * @n: bytes of memory to be filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
