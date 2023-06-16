#include "lists.h"

/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list.
 * @head: pointer to the first node
 * @n: the data to be added at the end of the list
 * Return: the address of the new element added.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *ptr;

	temp = malloc(sizeof(struct dlistint_s));

	if (!temp)
		return (NULL);
	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;
	ptr = *head;

	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = temp;
	temp->prev = ptr;
	return (ptr->next);
}
