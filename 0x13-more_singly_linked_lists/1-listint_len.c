#include "lists.h"

/**
 * listint_len - prints elements of a list_t list.
 * @h: input list_t list.
 * Return: number of nodes in h
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
