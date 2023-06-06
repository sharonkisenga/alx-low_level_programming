#include "lists.h"
/**
 * reverse_listint: reverse a listint_t
 * @head: first node in the list
 * return: a pointer to the first node of the reverse list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before;
	listint_t *after;

	if (head == NULL || *head == NULL)
	return (NULL);
	after = NULL;
	while ((*head)->next != NULL)
	{
		before = (*head)->next;
		(*head)->next = after;
		after = *head;
		*head = before;
	}
	(*head)->next = after;
	return (*head);
}
