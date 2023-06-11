#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_diagsums - prints sum of 2 diagnals of a square matrix of ints
 * @a: array that hold the sums
 * @size: size of matrix
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int cnt;
	int suma = 0;
	int sumb = 0;

	for (cnt = 0; cnt < size; cnt++)
	{
		suma += a[cnt * size + cnt];
	}
	for (cnt = 0; cnt < size; cnt++)
	{
		sumb += a[cnt * size + (size - 1 - cnt)];
	}
	printf("%d, %d\n", suma, sumb);
}
