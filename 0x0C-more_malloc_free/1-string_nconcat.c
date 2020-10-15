#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first parameter
 * @s2: second parameter
 * @n: third parameter
 *
 * Return: Always(0) Success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	unsigned int len1, len2, count;


	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
		;
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
		;
	}
	pointer = malloc(len1 + len2 + 1);
	if (n >= len2)
	{
		n = len2;
	}
	for (count = 0; s1[count] != '\0'; count++)
	{
		pointer[count] = s1[count];
	}
	for (count = 0; count < n; count++)
	{
		pointer[len1 + count] = s2[count];
	}
	pointer[len1 + n] = '\0';
	if (!pointer)
	{
		return (NULL);
	}
	return (pointer);
}
