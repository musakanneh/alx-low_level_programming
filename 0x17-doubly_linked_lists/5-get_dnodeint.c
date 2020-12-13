#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth
 * node of a dlistint_t linked list.
 * @index: the index of the node, starting from 0
 * @head: headof the linked list
 *
 * Return: if the node does not exist, return NULL
 */


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node = head;

	while (current_node && index)
	{
		index--;
		current_node = current_node->next;
	}
	return (current_node);
}
