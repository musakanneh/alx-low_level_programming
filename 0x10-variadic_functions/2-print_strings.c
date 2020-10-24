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
	if (separator == NULL)
	{
		char res[] = "nil";

		printf("%s", res);
	}
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(num, char *);

		if (separator && i != n - 1)
		{
			printf("%s", str);
			printf("%s", separator);
		}
		else
		{
			printf("%s", str);
		}
	}
	va_end(num);
	printf("\n");
}
