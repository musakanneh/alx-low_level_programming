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
	int len;

	while (s[len])
	{
		len++;
	}
	return (len);
}
