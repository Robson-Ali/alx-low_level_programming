#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list.
 * @head: A pointer to the address of the
 * head of the listint_t list to be freed
 *
 * Description: Sets the head to NULL.
 */

void free_listint2(listint_t **head)
{
	listint_t *rob;

	if (head == NULL)
		return;

	while (*head)
	{
		rob = (*head)->next;
		free(*head);
		*head = rob;
	}

	head = NULL;
}
