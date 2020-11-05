#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be converted
 *
 * Return: Void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
