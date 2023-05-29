#include "main.h"
/**
 * _islower - check if lowercase
 * Return: 1 if lower else 0
 * @c: char to check
 */
int_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
