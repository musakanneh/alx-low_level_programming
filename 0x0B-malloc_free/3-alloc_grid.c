#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - pointer to a 2 dimensional array of integers
 * @width: input width
 * @height: input height
 *
 * Return: returns NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	arr = (int **) malloc(height * sizeof(int *));

	if (arr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
	}
	if (arr != NULL)
	{
		return (arr);
	}
	return (NULL);
}
