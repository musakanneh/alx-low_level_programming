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
	int x, j, v = 0;
	int len = 1;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < ac; x++)
	{
		for (j = 0; av[x][j] != '\0'; j++)
		{
			len += 1;
		}
		len += 1;
	}
	str = malloc(sizeof(char) * len);

	for (x = 0; x < ac; x++)
	{
		for (j = 0; av[x][j] != '\0'; j++)
		{
			str[v] = av[x][j];
			v++;
		}
		str[v] = '\n';
		v++;
	}
	str[v] = '\0';

	if (str != NULL)
	{
		return (str);
	}
	else
	{
		return (NULL);
	}
}
