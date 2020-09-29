#include "holberton.h"

/**
 * swap_int - swap integers
 * @a: first parameter
 * @b: second parameter
 *
 * Description: swaps the values of two integers
 * Return: Always (0);
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
