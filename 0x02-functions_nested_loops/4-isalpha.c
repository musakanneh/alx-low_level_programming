#include "holberton.h"
#include <ctype.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (0);
}
