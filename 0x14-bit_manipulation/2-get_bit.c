#include "holberton.h"

/**
 * _to_power - gets the power of a number
 * @base: first input integer
 * @power: second input integer
 * Return: return b to the power of a
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
 * get_bit - returns the value at an index
 * @n: input integer unsigned long
 * @index: index to return
 * Return: value at input index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int test;

	if (index > sizeof(n) * 8 - 1)
	{
		return (-1);
	}
	test = _to_power(2, index);
	if (test & n)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
