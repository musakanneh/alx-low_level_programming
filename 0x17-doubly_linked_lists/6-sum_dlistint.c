#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of
 * all the data (n) of a dlistint_t linked list
 * @head: head of the linkedlist
 * Return: if the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head;

	register int sum = 0;

	while (current_node)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
