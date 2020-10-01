#include "holberton.h"

/**
 * string_toupper - uppercase strings
 * @s: input string
 * Description:  changes all lowercase letters of a string to uppercase
 * Return: always (0)
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
