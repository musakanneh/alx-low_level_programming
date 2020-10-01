#include "holberton.h"

/**
 * leet - encode string
 * @str: input string
 *
 * Description: encodes a string into 1337
 * Return: always (0)
 */

char *leet(char *str)
{
	int i, j;

	i = 0;
	char s[] = "aAeEoOtTlL";
	char s1[] = "4433007711";

	for ( ; str[i] != '\0'; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			if (s[j] == str[i])
			{
				str[i] = s1[j];
			}
		}
	}
	return (str);
}
