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
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

