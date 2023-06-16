#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to the first node
 * @n: the data of the new node to be added
 * Return: pointer to the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(struct dlistint_s));

	if (!temp)
		return (NULL);

	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;

	if (*head != NULL)
	{
		temp->next = *head;
		(*head)->prev = temp;
		(*head) = temp;
	}
	else
	{
		(*head) = temp;
	}
	return (*head);
}
