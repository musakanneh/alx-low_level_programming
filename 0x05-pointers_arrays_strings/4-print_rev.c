#include "holberton.h"

/**
 * print_rev - print reverse
 * @s: input string
 *
 * Description:  prints a string, in reverse
 * Return: Always (0)
 */

void print_rev(char *s)
{
	int left, len, i;

	len = 0;
	left = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		len = i;
	}
	for (; len >= left; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}

