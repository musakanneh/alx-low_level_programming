#include "holberton.h"

/**
 * print_most_numbers - print most numbers
 *
 * Description: prints the numbers, from 0 to 9, followed by a new line
 * Return: Alaways (0)
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
