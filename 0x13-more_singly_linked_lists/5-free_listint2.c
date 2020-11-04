#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: head node
 * Description: the function sets the head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node;
	listint_t *tmp_node;

	if (head == NULL)
	{
		return;
	}
	current_node = *head;
	while (current_node != NULL)
	{
		tmp_node = current_node;
		current_node = tmp_node->next;
		free(tmp_node);
	}
	*head = NULL;
	head = NULL;
}
