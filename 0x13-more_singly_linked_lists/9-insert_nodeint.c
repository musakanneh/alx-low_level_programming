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
	listint_t *current;
	listint_t *newNode;

	register uint i;

	newNode = malloc(sizeof(listint_t));
	if (!head || !newNode)
		return (NULL);
	newNode->n = n;
	if (!idx)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	current = *head;
	while (current)
	{
		if (i == idx - 1)
		{
			newNode->next = current->next;
			current->next = newNode;
			return (newNode);
		}
		i++;
		current = current->next;
	}
	free(newNode);
	return (NULL);
}
