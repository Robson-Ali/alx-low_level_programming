#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(tmp->str);
		free(head);
		head = tmp;
	}
}
