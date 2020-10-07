#include "holberton.h"

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
	int mid;

	mid = n / 2;
	if (n == 1)
	{
		return (1);
	}
	while (mid >= 1)
	{
		if (mid * mid == n)
		{
			return (mid);
		}
		mid--;
	}
	return (-1);
}
