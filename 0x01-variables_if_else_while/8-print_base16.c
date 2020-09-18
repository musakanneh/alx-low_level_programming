#include <stdio.h>

/**
* main - prints all the numbers of base 16 in lowercase
*
* Description: The numbers are all single digits
* Return: Always(0) Success
*/

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
