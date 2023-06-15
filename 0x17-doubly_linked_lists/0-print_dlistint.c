#include "lists.h"

/**
 * print_dlistint -  prints all the elements of a dlistint_t list.
 * @h: the list from whose elements are to be printed
 */

size_t print_dlistint(const dlistint_t *h)
{
	int elements = 0;	
	while (h != NULL)
	{
		elements += printf("%d\n", h->n);
		h = h->next;
	}
	return (elements);
}
