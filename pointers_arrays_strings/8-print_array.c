#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of ints
 * @a: pointer to array
 * @n: number of elements
 * Return: 0
 */

void print_array(int *a, int n)
{
	if (n <= 0)
		return;

	printf("%d", *a);

	if (n > 1)
	{
		int *p = a + 1;
		int *end = a + n;

		while (p < end)
		{
			printf(", %d", *p);
			p++;
		}
	}
	printf("\n");
}
