#include "main.h"
/**
 * *cap_string - capitalizes all words in a string
 * @str: string to be capitalized
 * Return: 0
 */
char *cap_string(char *str)
{
	int n;
	int capitalize = 1;

	for (int n = 0, str[n] != '\0'; n++)
	{
		if (str[n] == ' ' ||
			str[n] == '\t' ||
			str[n] == '\n' ||
			str[n] == ',' ||
			str[n] == ';' ||
			str[n] == '.' ||
			str[n] == '!' ||
			str[n] == '?' ||
			str[n] == '"' ||
			str[n] == '(' ||
			str[n] == ')' ||
			str[n] == '{' ||
			str[n] == '}')
		{
			capitalize = 1;
		}
		else if (capitalize && (str[n] >= 'a' && str[n] <= 'z'))
		{
			str[n] = str[n] - 'a' + 'A';
			capitalize = 0;
		}
		else
		{
			capitalize = 0;
		}
	}
	return (str);
}
