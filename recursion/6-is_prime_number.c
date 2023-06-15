#include "main.h"
/**
 * is_prime_number - checks if n is prime
 * @n: int to be checked
 * @i: num to be divided by
 * Return: void
 */

int check_prime(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1)
	{
	return (0);
	}
	return (check_prime(n, 2));
}

/**
 * check_prime - checks if n is prime
 * @n: int to be checked
 * @i: number to be divided by
 * Return: 1 if prime 0 if not
 */
int check_prime(int n, int i)
{
	if (i == n)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	return (check_prime(n, i + 1));
}
