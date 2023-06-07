#include "main.h"
/**
 * _strcat - appeneds src to dest string
 * @src: the string to append
 * @dest: the string that is appended upon
 * Return:pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return (dest);
}
