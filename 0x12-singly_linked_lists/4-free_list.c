#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: A pointer to the list_t list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
