#include "main.h"
/**
 * _pow_recursion - returns x raised to the power of y
 * @x: num to be raised
 * @y: power to be raised to
 * Return: -1 if y is lower than 0, else return the product
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
