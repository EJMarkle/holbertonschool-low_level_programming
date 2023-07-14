#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: pointer to head node
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *currentnode;

	while (head != NULL)
	{
		currentnode = head; /* set currentnode to value of head node */
		head = head->next; /* set head to the value of the next member */
		free(currentnode->str); /* frees the string of current node */
		free(currentnode); /* frees current node */
	}
}
