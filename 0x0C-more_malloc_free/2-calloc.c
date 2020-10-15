#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: first input parameter
 * @size: second input parameter
 *
 * Description: function that allocates memory for an array
 * Return: Always(0) Success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int i;

	if (!nmemb || !size)
	{
		return (NULL);
	}
	pointer = malloc(size * nmemb);
	if (!pointer)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		*(pointer + i) = 0;
	}
	return (pointer);
}
