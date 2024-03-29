#include "lists.h"
/**
 * free_dlistint - frees the list
 * @head: pointer to the head
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
