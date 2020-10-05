#include "holberton.h"
#include <stdio.h>

/**
 * set_string - set value
 * @a: input string
 * @size: input character
 *
 * Description: sets the value of a pointer to a char
 * Return: always 0
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum;

	sum = 0;
	for (i = 0; i < size; i++)
	{
		sum += *(a + i * size + i);
	}
	printf("%i, ", sum);
	for (j = 0; j < size; j++)
	{
		sum += *(a + size * (j + 1) - (j + 1));
	}
	printf("%i\n", sum);
}
