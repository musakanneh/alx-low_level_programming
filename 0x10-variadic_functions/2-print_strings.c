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
	va_list num;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		char *s = va_arg(num, char *);

		printf("%s%s", s ? s : "nil", (separator && i != n - 1) ? separator : "");
	}
	va_end(num);
	printf("\n");
}
