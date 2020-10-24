#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	register unsigned int i;
	va_list x;

	va_start(x, n);
	for (i = 0; i < n; i++)
	{

		if (separator && i != n - 1)
		{
			char *s = va_arg(x, char *);

			printf("%s%s", s ? s : "nil", (separator && i != n - 1) ? separator : "");
		}
		printf("%s", va_arg(x, char *));
	}
	va_end(x);
	printf("\n");
}
