#include "holberton.h"

/**
 * print_number - print number
 * @n: input value
 *
 * Description:  prints an integer
 * Return: Always (0)
 */

void print_number(int n)
{
	if ((n < 0) && (n >= -9))
	{
		_putchar('-');
		_putchar((n * -1) + '0');
	}
	else if (n <= -10)
	{
		_putchar('-');
		_putchar(((n / 10) * -1) + '0');
		_putchar(((n % 10)  * -1) + '0');
	}
	else if (n == 0)
	{
		_putchar(n + '0');
	}
	else if ((n > 0) && (n <= 9))
	{
		_putchar(n + '0');
	}
	else if ((n >= 10) && (n <= 99))
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if ((n >= 100) && (n <= 999))
	{
		_putchar((n / 100) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if ((n >= 1000) && (n <= 9999))
	{
		_putchar((n / 1000) + '0');
		_putchar((n / 100) % 10 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar((n % 10) + '0');
	}
}
