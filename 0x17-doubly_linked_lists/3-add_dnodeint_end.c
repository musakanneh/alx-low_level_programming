#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at
 * the end of a dlistint_t list
 * @head: pointer to head of list
 * @n: integer value of node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *temp_node = *head;

	if (!head || !new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}
	while (temp_node->next)
	{
		temp_node = temp_node->next;
	}
	temp_node->next = new_node;
	new_node->prev = temp_node;
	return (new_node);
}
