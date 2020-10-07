#include "holberton.h"

/**
 * _puts_recursion - print a string
 * @s: input string
 *
 * Description: prints a string, followed by a new line
 * Return: always 0
 */

void _puts_recursion(char *s)
{
	int i;

	for(i = 0; s[i]; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

