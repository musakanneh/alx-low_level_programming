#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: input params
 * @av: input params
 *
 * Return: nothing.
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	int len = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}
	str = malloc(sizeof(char) * len);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[k][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	if (str != NULL)
	{
		return (str);
	}
	return (NULL);
}
