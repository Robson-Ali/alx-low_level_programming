#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at the beginning
 * of a linked list.
 * @head: head of a list
 * @n: The integer for the new node to contain.
 *
 * Return: address of the new element. NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (*head);
}
