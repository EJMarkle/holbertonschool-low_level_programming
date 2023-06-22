#include "main.h"
/**
 * *_strdup - returns a pointer to newly allocated space in memory
 * contains a copy of the given string as a parameter
 * @str: string to be duped
 * Return: pointer to the duplicated string, NULL if fail
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length, i;

	if (str == NULL)
	{
		return (NULL);
	}

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}
	return (duplicate);
}
