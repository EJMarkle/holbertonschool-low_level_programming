#include "lists.h"
/**
 * add_node_end - adds a node to the end of the list_t list
 * Return: address of new element or NULL if fail
 * @str: string to be assigned to new node
 * @head: pointer to head node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode; /*pointer to new node */
	list_t *last; /* pointer to find tail node */

	/* creates new node and allocates mem */
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	/* dup string and save it to newnode->str */
	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	/* set length of string */
	newnode->len = strlen(str);
	newnode->next = NULL;
	/* if list is null, make new node head */
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	/* scan list to find tail */
	last = *head;
	while (last->next != NULL)
		last = last->next;
	/* set last node to new node */
	last->next = newnode;
	return (newnode);
}
