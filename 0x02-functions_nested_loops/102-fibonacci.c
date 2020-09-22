#include "holberton.h"
#include <stdio.h>

/**
 * main - prints first 50 numbers of the fibonacci sequence
 *
 * Description: prints from 1 to 50
 * Return: 0
 */

int main(void)
{
	int i, n, first_count, sec_count, next_num;

	first_count = 1;
	sec_count = 2;
	n = 50;

	for (i = 0; i < n; i++)
	{
		if (i == 1)
		{
			printf("%d", first_count);
		}
		else
		{
			printf("%d, ", first_count);
			next_num = first_count + sec_count;
			first_count = sec_count;
			sec_count = next_num;
		}
	}
	printf("\n");
	return (0);
}
