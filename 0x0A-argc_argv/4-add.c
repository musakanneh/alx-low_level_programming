#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds all positive numbers and prints it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i, res;

	res = 0;

	for (i = 0; i < argc; i++)
	{
		if (i > 0)
		{
			if (atoi(argv[i]) == 0)
			{
				return (printf("Error\n"), 1);
			}
			res += atoi(argv[i]);
		}
	}
	printf("%d\n", res);
	return (0);
}
