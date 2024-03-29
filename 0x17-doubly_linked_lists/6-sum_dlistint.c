#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: pointer to the doubly linked list.
 * Return: an integer.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);
	temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
