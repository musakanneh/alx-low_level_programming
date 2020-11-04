#include "lists.h"

/**
 *  add_nodeint - adds a new node at the beginning
 *  of a listint_t list
 * @head: head node
 * @n: number of input value
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = NULL;
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->next = (*head);
	new_node->n = n;
	(*head) = new_node;
	return (new_node);
}
