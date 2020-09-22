#include "holberton.h"

/*
 * main - prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 * return (0)
 */

int main(void)
{
	print_alphabet_x10();

	return (0);
}

void print_alphabet_x10(void)
{
	int alphabet_count = 0;

	while (alphabet_count < 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		alphabet_count++;
		_putchar('\n');
	}
}
