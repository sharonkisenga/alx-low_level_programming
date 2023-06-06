#include "lists.h"
/**
 * size_t free_listint_safe - frees alistint_t list
 * @h: pointer to the first node 
 * return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int muse;
	listint_t *temp;

	if (!h || !*h)
	return (0);
	while (*h)
	{
		muse = *h - (*h)->next;
		if (muse > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else 
		{
		free(*h);
		*h = NULL;
		len++;
		break;
		}
	}
	*h = NULL;
	return (len);
}
