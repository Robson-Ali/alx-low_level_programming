#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 *
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	size_t robsi;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		robsi++;
		h = h->next;
	}

	return (robsi);
}
