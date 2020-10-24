#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: chars to separe numbers
 * @n: n for dynamic input
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	register unsigned int i;
	va_list x;

	va_start(x, n);
	for (i = 0; i < n; i++)
	{
		if (separator && i != n - 1)
		{
			printf("%i", va_arg(x, int));
			printf("%s", separator);
		}
		else
		{
			printf("%i", va_arg(x, int));
		}
	}
	va_end(x);
	printf("\n");
}
