#include "holberton.h"

/**
 * flip_bits - flips binary numbers
 * to get from one number to another
 * @n: first input integer
 * @m: second input integer
 * Return: the number of bits you would need to
 * flip to get from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res = n ^ m;
	unsigned int num_to_flip = 0;


	while (res)
	{
		if (1 & res)
		{
			num_to_flip++;
		}
		res = res >> 1;
	}
	return (num_to_flip);
}
