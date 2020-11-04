#include "lists.h"

/**
 * add_nodeint_end - adds a new node at theend of a listint_t list.
 * @head: head node
 * @n: number of input nodes
 * Return: address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current_node;

	if (head == NULL || new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = new_node;
	}
	else
	{
		current_node = (*head);
		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		current_node->next = new_node;
	}
	return (new_node);
}
