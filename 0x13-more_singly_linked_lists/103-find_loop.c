#include "lists.h"
/**
 * find_listint_loop - find the loop in the linked list
 * @head: linked list to search
 * return: the address of the nodes where the loop start or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *hard = head;
	listint_t *easy = head;

	if (!head)
	return (NULL);
	while (hard && easy && easy->next)
	{
		easy = easy->next->next;
		hard = hard->next;
		if (easy == hard)
		{
		hard = head;
		while (hard != easy)
		{
		hard = hard->next;
		easy = easy->next;
		}
		return (easy);
		}
	}
	return (NULL);
}
