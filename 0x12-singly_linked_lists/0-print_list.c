#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 *
 * Return: number of robsi in the h
 */

size_t print_list(const list_t *h)
{
	size_t robsi;

	robsi = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		robsi++;
	}

	return (robsi);
}
