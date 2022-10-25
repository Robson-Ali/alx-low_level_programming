#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: A pointer to the head of the
 * listint_t list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *rob;

	while (head)
	{
		rob = head->next;
		free (head);
		head = rob;
	}
}
