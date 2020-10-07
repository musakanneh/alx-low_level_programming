#include "holberton.h"

/**
 * _strlen_recursion - return string len
 * @s: input string
 *
 * Description: returns the length of a string
 * Return: returns string len
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
