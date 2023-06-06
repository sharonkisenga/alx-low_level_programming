#include "lists.h"
/**
 * listint_len - returns the nument of elements in listint_t
 * @h: linked listint_t
 * return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
