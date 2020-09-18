#include <stdio.h>

/**
 * main - Print 2 digit numbers
 *
 * Description: Should appear in the formart provided
 * Return: Always(0) Success
 */

int main(void)
{
	int a, b;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			putchar(a);
			putchar(b);

		if (a == 57 && b == 57)
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
	putchar ('\n');

	return (0);
}
