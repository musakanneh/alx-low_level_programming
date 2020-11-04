#include "lists.h"

/**
 * insert_nodeint_at_index - prints elements of a list_t list.
 * @head: head node
 * @n: number of input
 * @idx: is the index of the list where the new node should be added
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current_node;
	listint_t *new_node;

	unsigned int count;

	new_node = malloc(sizeof(listint_t));
	if (head == NULL || new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	if (!(idx))
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current_node = *head;
	while (current_node)
	{
		if (count == idx - 1)
		{
			new_node->next = current_node->next;
			current_node->next = new_node;
			return (new_node);
		}
		count++;
		current_node = current_node->next;
	}
	free(new_node);
	return (NULL);
}
