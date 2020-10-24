#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 */

void print_all(const char * const format, ...)
{
	int n;
	va_list i, s;
	va_start(c, char);
	va_start(i, int);
	va_start(f, float);
	va_start(s, char *);

	if (s == NULL)
	{
		char arr[] = "nill";
		printf("%s", arr);
	}
	for (n = 0; n < format; n++)
	{
		int x = va_arg(n, int);
		printf("%d", x);
	}
}
