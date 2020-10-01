#include "holberton.h"

/**
 * leet - encode string
 * @str: input string
 *
 * Description: encodes a string into 1337
 * Return: always (0
 */

char *leet(char *str)
{
	int i = 0, k;
	char s[] = "aAeEoOtTlL";
	char s1[] = "4433007711";

	for (; str[i] != '\0'; i++)
	{
		for (k = 0; k <= 9; k++)
		{
			if (s[k] == str[i])
			{
				str[i] = s1[k];
			}
		}
	}
	return (str);
}

