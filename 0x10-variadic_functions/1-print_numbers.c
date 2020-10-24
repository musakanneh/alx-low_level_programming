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
	va_list numbers;

	va_start(numbers, n);
	if (!(*separator))
	{
		return;
	}
	for (i = 0; i < n; i++)
	{
		if (separator && i != n - 1)
		{
			printf("%d", va_arg(numbers, unsigned int));
			printf("%s", separator);
		}
		else
		{
			printf("%d", va_arg(numbers, unsigned int));
		}
	}
	va_end(numbers);
	printf("\n");
}
