#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the pointer of the head node
 * @idx: index where new node will be added
 * @n: node data
 * Return: address of new node, NULL if fail
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
		if (newnode == NULL)
			return (NULL);
		newnode->n = n;
		newnode->prev = NULL;
		newnode->next = *h;
		if (*h != NULL)
			(*h)->prev = newnode;
		*h = newnode;
		return (newnode);
	}
	temp = *h;
	while (temp != NULL)
	{
		if (count == idx - 1)
		{
			newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
			if (newnode == NULL)
				return (NULL);
			newnode->n = n;
			newnode->prev = temp;
			newnode->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = newnode;

			temp->next = newnode;
			return (newnode);
		}
		temp = temp->next;
		count++;
	}
	return (NULL);
}
