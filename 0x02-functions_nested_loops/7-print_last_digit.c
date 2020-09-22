#include "holberton.h"
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}

int print_last_digit(int n)
{
	int last_digit = abs(n % 10);

	_putchar(last_digit + 0);

	return (last_digit);
}
