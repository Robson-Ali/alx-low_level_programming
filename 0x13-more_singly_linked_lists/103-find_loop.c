#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 * a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 * Otherwise - the address of the node where the loop starts.
 *
 */
listint_t *find_listint_loop(listint_t *head)
{
		listint_t *tmp, *han;

		if (head == NULL || head->next == NULL)
			return (NULL);

		tmp = head->next;
		han = (head->next)->next;

		while (han)
		{
			if (tmp == han)
			{
				tmp = head;
				while (tmp != han)
				{
					tmp = tmp->next;
					han = han->next;
				}

				return (tmp);
			}

			tmp = tmp->next;
			han = (han->next)->next;
		}

		return (NULL);
}
