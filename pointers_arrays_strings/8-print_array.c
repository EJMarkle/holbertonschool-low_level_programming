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

	printf("%d", a[0]);

	for (int i = 1; i < n; i++)
	{
		printf(", %d", a[i]);
	}
	printf("\n");
}
