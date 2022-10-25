#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * linked list
 * @head: A pointer to the address of the
 * head of the listint_t list to be freed
 *
 * Return: if the linked list is empty - 0.
 * otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *rob;
	int han;

	if (*head == NULL)
		return (0);

	rob = *head;
	han = (*head)->n;
	*head = (*head)->next;

	free(rob);
	return (han);
}
