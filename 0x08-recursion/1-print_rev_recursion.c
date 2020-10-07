#include "holberton.h"
#include "stdio.h"

/**
 * _print_rev_recursion - print reverse
 * @s: input string
 *
 * Description: prints a string in reverse
 * Return: always 0
 */

void _print_rev_recursion(char *s)
{
	int left, right, count;
	
	count = 0;
	char rev[1000];
	while (s[count] != '\0')
	{
		count++;
	}
	right = count - 1;

	for (left = 0; left < count; left++)
	{
		rev[left] = s[right];
		right--;
	}
	_putchar(rev);
	_putchar('\n');
}
