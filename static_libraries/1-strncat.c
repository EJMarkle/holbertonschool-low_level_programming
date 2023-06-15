#include "main.h"
/**
 * _strncat - cats two strings and uses at most n bytes
 * @dest: to be catted upon
 * @src: thing to be catted to
 * @n: byte limiter
 * Return: updated pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0' && n > 0)
	{
		*p = *src;
		p++;
		src++;
		n--;
	}
	*p = '\0';
	return (dest);
}
