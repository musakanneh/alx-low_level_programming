#include "holberton.h"

/**
 * is_prime - find a prime number
 * @i: input int i
 * @j: input int j
 * Return: boolean val of the state of inputs
 */

int is_prime(int i, int j)
{
	if (j == 1)
	{
		return (1);
	}
	if (i % j == 0)
	{
		return (0);
	}
	return (is_prime(i, j - 1));
}

 /**
  * is_prime_number - printing prime numbers
  * @n: input integer value
  *
  * Description: returns 1 if the input integer is a
  * prime number, otherwise return 0
  * Return: returns the state of the inout value
  */

int is_prime_number(int n)
{
	if (n < 3)
	{
		return (0);
	}
	return (is_prime(n, n - 1));
}

