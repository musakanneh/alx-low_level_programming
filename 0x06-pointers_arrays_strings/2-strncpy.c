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
	int len, i;

	i = 0;
	len = 0;
	while (src[len] != '\0')
	{
		++len;
	}
	while (src[i] != 0 && i < n)
	{
		dest[len] = src[i];
		dest[len]++;
		src[i]++;
	}
	dest[len] = '\0';
	return (dest);
}
