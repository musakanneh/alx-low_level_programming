#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head node;
 */

void free_listint(listint_t *head)
{
	listint_t *tmp_node;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		tmp_node = head;
		head = head->next;
		free(tmp_node);
	}
	head = NULL;
}
