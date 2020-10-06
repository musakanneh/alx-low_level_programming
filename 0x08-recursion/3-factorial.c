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
	int i;

	if (i == 0)
	{
		return 0;
	}
	return i * (factorial(i - 1));
}
