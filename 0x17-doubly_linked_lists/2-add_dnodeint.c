#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at 
 * the beginning of a dlistint_t list.
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	register int temp_node;

	if (head == NULL)
	{
		printf("%s", "List is empty");
	}
	while (head != NULL)
	{
		head->prev = temp_node;
		tem_node->next = head;
	}
	return (temp_node);
}
