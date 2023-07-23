#include "lists.h"
/**
 * print_dlistint - prints the elements of a dlistint_t list
 * @h: head node
 * Return: the number of node
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodecount;
	const dlistint_t *current;

	nodecount = 0;
	current = h;
	/* while current isnt null, print node and update
	 * current to hold next node and update nodecount */
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		nodecount++;
	}
	return (nodecount);
}
