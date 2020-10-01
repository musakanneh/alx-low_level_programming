#include "holberton.h"

/**
 * _strncpy - string copy
 * @dest: first input character
 * @src: second input character
 * @n: number of bytes
 *
 * Description: the function copies a string
 * Return: Always (0)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		++i;
	}
	for (i = 0; i < n && src[i] != '\0'; ++i)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
