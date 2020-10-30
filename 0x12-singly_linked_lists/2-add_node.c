#include "lists.h"

/**
 * _strlen - counts the lenght of a string
 * @str: string to be counted
 * Return: len of a string
 */

int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node - adds a node at the beginning
 * @head: first parameter
 * @str: second parameter
 * Return: nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;

	*head = new;

	return (new);
}
