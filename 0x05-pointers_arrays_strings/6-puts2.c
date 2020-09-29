#include "holberton.h"

/**
 * puts2 - print characte
 * @str: input string
 *
 * Description: prints character of a string, starting first character
 * Return: Always (0)
 */

void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
