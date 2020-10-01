#include "holberton.h"

/**
 * reverse_array - reverse an array
 * @a: first input
 * @n: number of elemets
 *
 * Description: reverses the content of an array of integers
 * Return: always (0)
 */

void reverse_array(int *a, int n)
{
	int left, right,  tmp;

	left = 0;
	right = n - 1;

	while (left < right)
	{
		tmp = a[left];
		a[left] = a[right];
		a[right] = tmp;
		left++;
		right--;
	}
}
