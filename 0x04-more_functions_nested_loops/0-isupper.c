#include "holberton.h"

/**
 * checks for uppercase character
 * @c : input type variable
 *
 * Always return(0)
 */

int _isupper(int c)
{
	if ((c == 'a') || (c == 'A'))
	{
		return (1);
	}
	return (0);
}
