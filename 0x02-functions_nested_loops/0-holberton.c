#include "holberton.h"

/**
 * main - prints Holberton
 *
 * return (0)
 */

int main(void)
{
	char c[9] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(holberton[i]);
	}
	_putchar('\n');

	return (0);
}
