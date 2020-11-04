#include "lists.h"

/**
 * get_nodeint_at_index - prints elements of a list_t list
 * @head: head node
 * @index: index of the node, starting at 0
 * Return: the current node, else, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *current_node;

	count = 0;
	current_node = head;
	if (!(current_node))
	{
		return (NULL);
	}
	while (current_node != NULL)
	{
		if (count == index)
		{
			return (current_node);
		}
		count++;
		current_node = current_node->next;
	}
	return (current_node);
}
