#include <stdio.h>
#include <stdlib.h>

/**
 * calculate_cents - calculates and return cents
 * @num: input params
 * Return: coins
 */

int calculate_cents(int num)
{
	int coins = 0;

	while (num)
	{
		if (num >= 25)
		{
			num -= 25;
		}
		else if (num >= 10)
		{
			num -= 10;
		}
		else if (num >= 5)
		{
			num -= 5;
		}
		else if (num >= 2)
		{
			num -= 2;
		}
		else if (num >= 1)
		{
			num -= 1;
		}
		coins++;
	}
	return (coins);
}

/**
 * main - prints the minimum number of
 * coins to make change for an amount of money
 * @argc: amount of arguement
 * @argv: an array of inputs from argc
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int number;

	if (argc != 2)
	{
		return (printf("Error\n"), 1);
	}
	number = atoi(argv[1]);
	if (number < 0)
	{
		return (printf("Error\n"), 1);
	}
	printf("%d\n", calculate_cents(number));
	return (0);
}
