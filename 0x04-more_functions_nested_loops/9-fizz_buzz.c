#include <stdio.h>

/**
 * main - prints nultplies of 3 or 5
 *
 * Description: multiples between 0 and 100
 * Return: Always(0)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 99; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%i ", i);
		}
	}
	printf("Buzz\n");
	return (0);
}
