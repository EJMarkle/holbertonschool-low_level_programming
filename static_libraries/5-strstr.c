#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @needle: sub to be found
 * @haystack: string to look in
 * Return: pointer to sub, else NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack)
	{
		h = haystack;
		n = needle;
		while (*haystack && *n && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);

		haystack = h + 1;
	}
	return (NULL);
}
