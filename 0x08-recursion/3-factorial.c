#include "holberton.h"

/**
 * factorial - print factorial
 * @n: input number
 *
 * Description: returns the factorial of a given number
 * Return: returns factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
