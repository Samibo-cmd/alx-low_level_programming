#include "lists.h"

/**
* add_nodeint_end - A function that add new node at the
* end of list
* @head: A pointer
* @n: Node data.
* Return: head
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *lastNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	lastNode = *head;


	while (lastNode->next)
		lastNode = lastNode->next;
	lastNode->next = newNode;

	return (newNode);
}
