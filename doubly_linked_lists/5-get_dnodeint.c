#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of the list
 * @head: pointer to the head node
 * @index: index of node to retrieve
 * Return: pointer to nth node, NULL if node doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}
	return (NULL);
}
