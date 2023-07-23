#include "lists.h"
/**
 * add_dnodeint - adds a new node to the beginning of the list
 * @head: pointer to pointer to head
 * @n: node data
 * Return: address of new element, or NULL if fail
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (head == NULL)
		return (NULL);

	/* allocates memory for new node */
	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	/* initialize new node */
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;

	/* update previous pointer of current head node if it exists */
	if (*head != NULL)
		(*head)->prev = newnode;

	/* update head to new node */
	*head = newnode;

	return (newnode);
}
