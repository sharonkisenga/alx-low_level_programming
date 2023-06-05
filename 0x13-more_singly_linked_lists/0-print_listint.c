#include "lists.h"
/**
 * print_listint - prints all elements of listint_t
 * @h: listint_t
 * return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
