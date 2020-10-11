#include "holberton.h"

/**
 * _atoi - converts strings to int
 * @s: first parameter
 *
 * Description: takes all types of char
 * Return: 0 for success
 */

int _atoi(char *s) 
{ 
	int result, sign, i;

	result = 0;
	sign = 1; 
	i = 0; 
	if (s[0] == '-') { 
		sign = -1; 

		i++; 
	} 
	for (; s[i] != '\0'; ++i)
	{
		result = result * 10 + s[i] - '0'; 
	}
	return (sign * result); 
}
