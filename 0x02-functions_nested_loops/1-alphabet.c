#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * return (0)
 */

int main(void)
{
	print_alphabet();

	return (0);
}

void print_alphabet(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
