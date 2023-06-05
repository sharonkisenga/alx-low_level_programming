#include "lists.h"
/**
 * pop_listint - deletes a head node of a listint_t
 * @header: linked list
 * return: head's node data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int nodes;

	if (!head || !*head)
	return (0);
	nodes = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (nodes);
}
