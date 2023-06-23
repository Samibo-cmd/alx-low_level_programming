#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the first node
 * @index: the nth node to be returned
 * Return: The nth node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (head)
	{
		if (count == index)
			return (temp);
		count++;
		temp = temp->next;
	}
	return (temp);
}

