#include "holberton.h"

/**
 * _to_power - powers a number b to the p's power
 * @base: base inupt
 * @power: power
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
 * clear_bit - sets bit to zero at index index
 * @n: input integer
 * @index: returns the value of a bit at a given index
 * Return: 1 for ssucess -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int test;

	if (index > sizeof(n) * 8 - 1)
	{
		return (-1);
	}
	test = _to_power(2, index);
	*n = (*n & test) ? *n ^ test : *n;
	return (1);

}
