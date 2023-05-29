#include "main.h"
/**
 * _isalpha - checks for betic char
 * Return: 1 if c is a letter, 0 otherwise
 * @c: char to check
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c > 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
