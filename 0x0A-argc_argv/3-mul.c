#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two arguments and prints result
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if no errors
 */

int main(int argc, char *argv[])
{
	int i, first_num, sec_num, product;

	if (argc != 3)
	{
		return (printf("Erro\n"), 1);
	}
	for (i = 0; i < argc; i++)
	{
		first_num = atoi(argv[1]);
		sec_num = atoi(argv[2]);
	}
	product = first_num * sec_num;
	printf("%d\n", product);
	return (0);
}
