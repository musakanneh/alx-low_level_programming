#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers
 * @min: first intput parameter
 * @max: second input parameter
 *
 * Return: Always(0) Success
 */

int *array_range(int min, int max)
{
	int *pointer;
	int len, i;

	if (min > max)
	{
		return (NULL);
	}

	len = max - min + 1;
	pointer = malloc(sizeof(int) * len);
	if (!pointer)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		pointer[i] = min++;
	}
	return (pointer);
}
