#include "main.h"
/**
 * *leet - encodes a string into 1337
 * @p: string to be encoded
 * Return: void
 */

char *leet(char *p)
{
	int i, j;
	char *letters = "AEOTL";
	char *leet[] = {"4", "3", "0", "7", "1"};

	for (i = 0; p[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (p[i] == letters[j] || p[i] == letters[j] + 32)
			{
				p[i] = *leet[j];
				break;
			}
		}
	}
	return (p);
}
