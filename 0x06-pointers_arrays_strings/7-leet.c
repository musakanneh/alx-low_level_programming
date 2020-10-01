#include "holberton.h"

/**
 * leet - encode string
 * @str: input string
 * Description: encodes a string into 1337
 * Return: always (0)
 */

char *leet(char *str)
{
	int i, j;

	i = 0;
	char s[] = "aAeEoOtTlL";
	char s1[] = "4433007711";

	while (str[i] != '\0')
	{
		for (j = 0; j <= 9; ++j)
		{
			if (str[i] == s[j])
			{
				str[i] = s1[j];
			}
		}
		++i;
	}
	return (str);
}
