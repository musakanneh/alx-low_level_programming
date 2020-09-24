#include "holberton.h"

/**
 * _isupper - prints 1 or 0 depending on input
 * @c: input type variable
 *
 * Description: checks for uppercase letters
 * Return: Aways (0).
 */

int _isupper(int c)
{
	if ((c >= 'a') && (c <= 'A'))
	{
		return (1);
	}
	return (0);
}
