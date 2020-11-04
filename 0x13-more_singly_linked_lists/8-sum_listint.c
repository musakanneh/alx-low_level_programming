#include "lists.h"

/**
 * sum_listint - a function that returns
 * the sum of all the data (n) in the linked list
 * @head: head node
 * Return: The number of nodes in h.
 */

int sum_listint(listint_t *head)
{
	register int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
