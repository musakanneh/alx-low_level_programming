#include "holberton.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: input value
 * Return: converted number, or 0 if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal, weight, remainder;

	decimal = 0;
	weight = 1;
	while (b != 0)
	{
		remainder = b % 10;
		decimal = decimal + remainder * weight;
		b = b % 10;
		weight = weight * 2;
	}
	return (decimal);
}


