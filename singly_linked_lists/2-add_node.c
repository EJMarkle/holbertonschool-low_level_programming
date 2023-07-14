#include "lists.h"
/**
 * add_node - adds a node to the beginning of list_t
 * Return: address of new element, or NULL if faili
 * @head: pointer to pointer to head node
 * @str: string to be stored in new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->len = strlen(str);
	newnode->next = *head;

	*head = newnode;
	return (newnode);
}
