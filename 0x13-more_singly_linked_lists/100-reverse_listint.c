#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *robson, *hanan;

	if (head == NULL || *head == NULL)
		return (NULL);

	hanan = NULL;

	while ((*head)->next != NULL)
	{
		robson = (*head)->next;
		(*head)->next = hanan;
		hanan = *head;
		*head = robson;
	}

	(*head)->next = hanan;

	return (*head);
}
