#include "lists.h"

/**
 * print_dlistint - a function that prints all
 * the elements of a dlistint_t list
 * @h: head node
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	register int len = 0;

	if (h == NULL)
	{
		printf("%s", "Empty lisit");
	}
	while (h != NULL)
	{
		int new_node = h->n;

		printf("%d\n", new_node);
		h = h->next;
		len++;
	}
	return (len);
}
