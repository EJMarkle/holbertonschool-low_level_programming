#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * Return: number of nodes, 0 if null
 * @h: pointer to head node
 */

size_t print_list(const list_t *h)
{
	size_t nodecount = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		nodecount++;
	}
	return (nodecount);
}
