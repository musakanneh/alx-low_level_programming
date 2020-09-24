#include "holberton.h"

/**
 * _isdigit - 1 if c is a digit
 * @c: input value
 *
 * Description: checks for a digit (0 through 9).
 * Return: Always (0).
 */

int _isdigit(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	return (1);
}
