#include "main.h"
/**
 * _sqrt_recursion - returns the sq root of a number
 * @n: number to find the square root of
 * Return: Sq root, -1 if there is no natural square root
 *
 * sqrt_helper - recursive helper function to find sq root
 *
 */

int _sqrt_recursion(int n);
int sqrt_helper(int n, int start, int end);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_helper(n, 0, n));
}

int sqrt_helper(int n, int start, int end)
{
	int mid;

	if (start <= end)
	{
		mid = (start + end) / 2;
	}

	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid > n)
	{
		return (sqrt_helper(n, start, mid - 1));
	}
	else
	{
		return (sqrt_helper(n, mid + 1, end));
	}
	return (-1);
}
