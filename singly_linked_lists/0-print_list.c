#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * Return: number of nodes, 0 if null and print [0] (nil)
 * @h: pointer to head node
 */

size_t print_list(const list_t *h)
{
	size_t nodecount = 0;

	/* iterate through list until h becomes NULL */
	while (h != NULL)
	{
		/* h->str, h is pointer to struct and str is member to be accessed */
		if (h->str == NULL)
			/* if string is null, print this */
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		/*after printing, h is updated to point to next node in list until null */
		h = h->next;
		nodecount++;
	}
	return (nodecount);
}
