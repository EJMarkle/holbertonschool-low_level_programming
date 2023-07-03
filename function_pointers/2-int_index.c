#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @size: num of element in the array
 * @array: array to be searched
 * @cmp: pointer to the function
 * Return: index of first element for which cmp does not return 0,
 * -1 if no matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
