#include "holberton.h"

/**
 * print_diagonal - print digonal
 * @n: input value
 *
 * Description: draws a diagonal line on the terminal
 * Return: Always (0)
 */

void print_diagonal(int n)
{
	int count = 0, size;

	if (n > 0)
	{
		while (count < n)
		{
			for (size = 0; size < count; size++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			count++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
