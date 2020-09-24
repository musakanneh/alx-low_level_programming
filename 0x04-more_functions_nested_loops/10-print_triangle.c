#include "holberton.h"

/**
 * print_triangle - print triangle
 * @size: input size
 *
 * Description: size of triangle depends on input
 * Return: Always (0)
 */

void print_triangle(int size)
{
	int i, j;

	j = size;

	if (size <= 0)
	{
		_putchar('\n');
	}
	while (size > 0)
	{
		for (i = 0; i < j; i++)
		{
			_putchar((i < j - 1) ? ' ' : '#');
		}
		_putchar('\n');
		size--;
	}
}
