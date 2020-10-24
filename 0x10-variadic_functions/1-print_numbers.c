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
	if (!(*separator))
	{
		return;
	}
	for (i = 0; i < n; i++)
	{
		printf("%i%s", va_arg(x, int), (separator && i != n - 1) ? separator : "");
	}
	va_end(x);
	printf("\n");
}
