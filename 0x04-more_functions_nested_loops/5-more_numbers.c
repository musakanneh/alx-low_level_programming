#include "holberton.h"

/**
 * more_numbers - more numbers
 *
 * Description: prints 10 times the numbers, from 0 to 14
 * Return: Always (0)
 */

void more_numbers(void)
{
	int n, i;

	for (n = 0; n <= 10; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
			else
			{
				_putchar(i % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
