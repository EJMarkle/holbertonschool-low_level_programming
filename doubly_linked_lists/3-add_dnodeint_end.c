#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of the list
 * @head: pointer to a pointer to the head
 * @n: data for new node
 * Return: address of new element or NULL if fail
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *current;

	if (head == NULL)
		return (NULL);

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;

	current->next = newnode;
	newnode->prev = current;

	return (newnode);
}
