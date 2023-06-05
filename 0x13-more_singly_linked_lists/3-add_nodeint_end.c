#include "lists.h"
/**
 * add_nodeint - add new node to the end 
 * @head: point the first node
 * @n: insert the new node
 * return: addess of the new node or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
	temp = temp->next;
	temp->next = new;
	return (new);
}
