#include "holberton.h"
#include <ctype.h>

/**
 * main - checking for lowercase character
 *
 * return (0);
 */

int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');

	return (0);
}

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
