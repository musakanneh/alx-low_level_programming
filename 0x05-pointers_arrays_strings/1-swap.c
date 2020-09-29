#include "holberton.h"

/**
 * swap_int - swap integers
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
