#include <stdio.h>

/**
 * main - Prints a list of numbers
 *
 * Description: The numbers are all single digits
 * Return: Always(0) Success
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
