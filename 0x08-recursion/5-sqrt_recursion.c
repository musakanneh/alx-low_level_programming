#include "holberton.h"

/**
 * is_squre_root - determines the square root of
 * @j: an input value
 * @i: input value
 *
 * Description: determines the square root
 * Return: returns the input val
 */

int is_square_root(int i, int j)
{
	if (j * j > i)
	{
		return (-1);
	}
	if (j * j == i)
	{
		return (j);
	}
	return (is_square_root(i, j + 1));
}

/**
 * _sqrt_recursion - returns square root
 * @n: input size
 *
 * Description: If n does not have a natural square root,
 * the function should return -1
 * Return: returns the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (is_square_root(n, 1));
}
