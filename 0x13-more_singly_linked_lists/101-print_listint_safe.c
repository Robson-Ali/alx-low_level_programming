#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t looped_listint_safe(const listint_t *head);

/**
 * looped_listint_len - counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of a listint_t to check.
 *
 * Return: if the list is not looped - 0.
 * otherwise - the number of unique nodes in the list
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tmp, *han;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tmp = head->next;
	han = (head->next)->next;

	while (han)
	{
		if (tmp == han)
		{
			tmp = head;
			while (tmp != han)
			{
				nodes++;
				tmp = tmp->next;
				han = han->next;
			}

			tmp = tmp->next;
			while (tmp != han)
			{
				nodes++;
				tmp = tmp->next;
			}

			return (nodes);
		}

		tmp = tmp->next;
		han = (han->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, idx = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (idx = 0; idx < nodes; idx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
