#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * of a listint_t list
 * @head: head node
 * @n: number of input value
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!head || !newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head)
		newNode->next = *head;
	*head = newNode;
	return (newNode);
}
