#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the head of the list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur = head;

	while (cur != NULL)
	{
		dlistint_t *temp = cur;

		cur = cur->next;
		free(temp);
	}
	head = NULL;
}
