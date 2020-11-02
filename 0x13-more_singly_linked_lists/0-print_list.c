#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @listint_t: linked list
 * @h: input value
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	register int i;

	while (h)
	{
		printf("%d", h->len);
		h = h->next;
		i++;
	}
	return (i);
}
