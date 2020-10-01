#include "holberton.h"

/**
 * _strcmp - compare strings
 * @s1: first input char
 * @s2: second input char
 *
 * Description: the function compares two strings
 * Return: character count
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, diff;

	for (i = 0; s1[i] != '\0'; ++i)
	{
		for (j = 0; s2[j] != '\0'; ++j)
		{
			if (s1[i] == s2[j])
			{
				continue;
			}
			else
			{
				diff = s1[i] - s2[j];
				return (diff);
			}
		}
	}
	return (0);
}
