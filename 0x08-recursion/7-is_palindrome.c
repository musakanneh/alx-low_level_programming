#include "holberton.h"

/**
 * str_len - getting string len
 * @s: indicating an input value
 *
 * Description: finding the length of a string
 * Return: returns string's length
 */

int str_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + str_len(s + 1));
}

/**
 * is_palindrome - checks for a palindrome
 * @s: input character
 * @i: an interator
 * @len: string length indicator
 *
 * Description: checking if a string is a palindrome
 * Return: the state of the string
 */

int check_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
	{
		return (1);
	}
	if (s[i] == s[len - i - 1])
	{
		return (check_palindrome(s, len, i + 1));
	}
	return (0);
}

/**
 * is_palindrome - print palindrome
 * @s: input string
 *
 * Description: returns 1 if a string is a
 * palindrome and 0 if not
 * Return: state of input string
 */

int is_palindrome(char *s)
{
	int i, len;

	i = 0;
	len = str_len(s);

	if (!*s)
	{
		return (1);
	}
	return (check_palindrome(s, len, i));
}
