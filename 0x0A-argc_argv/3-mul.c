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
	int first_num, sec_num;

	if (argc == 3)
	{
		first_num = atoi(argv[1]);
		sec_num = atoi(argv[2]);
		printf("%d\n", first_num * sec_num);
		return (0);
	}
	printf("Erro\n");
	return (1);
}
