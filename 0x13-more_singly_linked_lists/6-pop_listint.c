#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head node
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *current_node;
	int res;

	if (((*head) == NULL) || head == NULL)
	{
		return (0);
	}
	current_node = *head;
	res = current_node->n;
	*head = (*head)->next;
	free(current_node);
	return (res);
}
