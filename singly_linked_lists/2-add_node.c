#include "lists.h"
/**
 * add_node - adds a node to the beginning of list_t
 * Return: address of new element, or NULL if faili
 * @head: pointer to pointer to head node
 * @str: string to be stored in new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode; /* newnode is a pointer to new node */

	/* finds size of type list_t, and allocates memory for newnode */
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	/* duplicates str, and assigns it to member str of newnode */
	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode); /* if str is NULL, free memory */
		return (NULL);
	}
	/* strlen finds length of str, and sets it to len member of newnode */
	newnode->len = strlen(str);
	/* sets next member of newnode to head node */
	newnode->next = *head;
	/* sets *head to newnode */
	*head = newnode;
	return (newnode);
}
