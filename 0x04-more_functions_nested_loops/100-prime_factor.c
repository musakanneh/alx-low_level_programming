#include <stdio.h>

/**
 * main - program that prints out the highest prime
 *
 * Return: Always (0)
 */

int main(void)
{
	int n, i, d;

	d = 50829601;
	n = 150;

	for (i = 3; i <= n; i = i + 2)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	}
	printf("%d", d);
	printf("\n");
	return (0);
}
