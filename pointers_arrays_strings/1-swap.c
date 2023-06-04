#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the values of two integers
 * @a: first value to be swapped
 * @b: second value to be swapped
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
