#include "holberton.h"

/**
 * _to_power - powers a number base to
 * @base: base input
 * @power: power input
 * Return: the power of two the
 */

unsigned long int _to_power(int base, int power)
{
	unsigned long int res = 1;

	while (power)
	{
		res *= base;
		power--;
	}
	return (res);
}

/**
 * print_binary - prints the binary representation of a number
 * @n: input integer
 */

void print_binary(unsigned long int n)
{
	unsigned long int test;

	test = _to_power(2, sizeof(unsigned long int) * 8 - 1);
	int start = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (test)
	{
		if (!(test & n) && start)
		{
			_putchar('0');
		}
		else if (test & n)
		{
			_putchar('1');
			start = 1;
		}
		test = test >> 1;
	}
}

