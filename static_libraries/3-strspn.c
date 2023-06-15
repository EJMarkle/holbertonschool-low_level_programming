#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment to check for num of bytes
 * @accept: pointer
 * Return: cnt
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int cnt = 0;
	int fnd;
	int i;

	while (*s)
	{
		fnd = 0;
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
			cnt++;
			fnd = 1;
			break;
			}
		}
	if (!fnd)
		break;
	s++;
	}
	return (cnt);
}
