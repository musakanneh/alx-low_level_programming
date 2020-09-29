#include "holberton.h"

/**
 * puts_half - print half
 * @str: input string
 *
 * Description: prints half of a string
 * Return: Always (0);
 */

void puts_half(char *str)
{
	int i;
	int diff;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 1)
	{
		diff = (i + 1) / 2;

		while (str[diff] != '\0')
		{
			_putchar(str[diff]);
			diff++;
		}
	}
	else
	{
		diff = (i / 2);

		while (str[diff] != '\0')
		{
			_putchar(str[diff]);
			diff++;
		}
	}
	_putchar('\n');
}
