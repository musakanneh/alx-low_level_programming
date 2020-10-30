#include "lists.h"

/**
 * list_len - prints number of nodes
 * @h: first parameter
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
