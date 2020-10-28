#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - function that prints character
 * @argptr: argument list pointer to character to be printed
 */

void print_char(va_list argptr)
{
	char character;

	character = va_arg(argptr, int);
	printf("%c", character);
}

/**
 * print_int - function that prints integer
 * @argptr: argument list pointer to integer to be printed
 */

void print_int(va_list argptr)
{
	int num_i;

	num_i = va_arg(argptr, int);
	printf("%i", num_i);
}

/**
 * print_float - function that prints a float
 * @argptr: argument list pointer to float to be printed
 */

void print_float(va_list argptr)
{
	float num_f;

	num_f = va_arg(argptr, double);
	printf("%f", num_f);
}

/**
 * print_string - function that prints string
 * @argptr: argument list pointer to string to be printed
 */

void print_string(va_list argptr)
{
	char *str;

	str = va_arg(argptr, char*);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 * @...: number of arguments
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list arguments;
	int index, arg_len;
	char *separator = "";

	prints_t fmt_list[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	va_start(arguments, format);
	index = 0;
	while (format && (*(format + index)))
	{
		arg_len = 0;
		while (arg_len < 4 && (*(format + index) != *(fmt_list[arg_len].notation)))
		{
			arg_len++;
		}
		if (arg_len < 4)
		{
			printf("%s", separator);
			fmt_list[arg_len].print_dType(arguments);
			separator = ", ";
		}
		index++;
	}
	printf("\n");
	va_end(arguments);
}
