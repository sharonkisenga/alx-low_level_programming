#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node 
 * @head: first element in the list
 * @index: index of the node
 * return: reurn NULL
 */
 listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
	if (head == NULL)
	return (NULL);
	head = head->next;
	}
	return (head);
}
