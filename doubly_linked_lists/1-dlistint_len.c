#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: pointer to head node
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodecount = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		nodecount++;
	}
	return (nodecount);
}
