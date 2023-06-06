#include "lists.h"
#include <stdio.h>
/**
 * size_t looped_listint_len(const listint_t *head);
 * size_t print_listint_safe(const listint_t *head);
 */
/**
 * looped_listint_len - count the number of unique code 
 * @head: pointer to the head of listint_t
 * return: if the list is not looped - 0
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *bird;
	const listint_t *rabbit;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
	return (0);
	bird = head->next;
	rabbit = (head->next)->next;
	while (rabbit)
	{
	if (bird == rabbit)
	{
	bird = head;
	while (bird != rabbit)
	{
	nodes++;
	bird = bird->next;
	rabbit = rabbit->next;
	}
	bird = bird->next;
	while (bird != rabbit)
	{
		nodes++;
		bird = bird->next;
	}
	return (nodes);
	}
	bird = bird->next;
	rabbit = (rabbit->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head
 * return: the number of nodes 
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);
	if (nodes == 0)
	{
	for (;head != NULL; nodes++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
		return (nodes);
}

