#include "main.h"
/**
 * _strchr - located a char in a string
 * @s: string to be checked
 * Return: pointer to the first occurance of 'c', null if char not
 * found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
		return (s);
		}
	s++;
	}
	return (NULL);
}
