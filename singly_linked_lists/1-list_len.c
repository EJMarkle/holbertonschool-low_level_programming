#include "lists.h"
/**
 * list_len - finds the number of elements in list_t list
 * @h: pointer to head node
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t elemcount = 0;

	/* iterate through nodes until h = null */
	while (h != NULL)
	{
		elemcount++; /* increment element counter */
		h = h->next; /* move to next node */
	}
	return (elemcount);
}
