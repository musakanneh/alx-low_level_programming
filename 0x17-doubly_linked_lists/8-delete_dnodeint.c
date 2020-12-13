#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes the node at
 * index index of a dlistint_t linked list
 * @head: head node
 * @index:  the index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr_node = *head;
	size_t size = 0;

	if (!*head)
	{
		return (-1);
	}
	while (curr_node)
	{
		size++;
		curr_node = curr_node->next;
	}
	if (size < index + 1)
	{
		return (-1);
	}
	curr_node = *head;
	if (!index)
	{
		*head = curr_node->next;
		if (curr_node->next)
		{
			curr_node->next->prev = NULL;
		}
		curr_node->next = NULL;
		free(curr_node);
		return (1);
	}
	while (index--)
	{
		curr_node = curr_node->next;
	}
	curr_node->prev->next = curr_node->next;
	if (curr_node->next)
	{
		curr_node->next->prev = curr_node->prev;
	}
	free(curr_node);
	return (1);
}
