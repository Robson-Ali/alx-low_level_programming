#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of a listint_t to check.
 *
 * Return: if the list is not looped - 0.
 * otherwise - the number of unique nodes in the list
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *tmp, *han;
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
 * free_listint_safe - frees a listint_t list safely.
 * @h: head of a list.
 *
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, idx = 0;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (idx = 0; idx < nodes; idx++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}


		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
