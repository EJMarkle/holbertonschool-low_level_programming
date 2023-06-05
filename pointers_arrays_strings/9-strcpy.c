#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - copies the sting pointed by src to the buffer pointed by * dest
 * @dest: destination
 * @src: string to be coppied
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (ptr);
}
