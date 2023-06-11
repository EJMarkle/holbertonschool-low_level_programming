#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for a set of bytes
 * @s: string to be looked for
 * @accept: string to be looked in
 * Return: NULL if not found, pointer to the byte if found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
