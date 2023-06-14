#include "main.h"
/**
 * factorial - returns factorial of n
 * @n: Num to be factorial'd
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
