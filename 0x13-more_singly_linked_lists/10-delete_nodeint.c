#include "lists.h"
/**
 * delete_nodeint_at_index - delete the node at index index
 * @head: first node in the list
 * @index: index of the should be deleted
 * return: return 1 if it succedded -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (j < index - 1)
	{
	if (!temp || !(temp->next))
		return (-1);
	temp = temp->next;
	j++;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);
	return (1);
}


