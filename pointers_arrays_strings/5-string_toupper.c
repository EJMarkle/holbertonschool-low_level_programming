#include "main.h"
#include <stdio.h>
/**
 * *string_toupper - changes all lowercase chars to upper
 * Return: 0
 * @str: string to be adjusted
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr = *ptr - ('a' - 'A');
		ptr++;
	}
	return (str);
}
