#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct prints - Defines a printer to data types
 * @notation: type of data type
 * @print_dType: pointer to function that prints data types
 * according to their notation
 */

typedef struct prints
{
	char *notation; /** format specifiers **/
	void (*print_dType)(va_list argptr);
} prints_t;

void print_char(va_list argptr);
void print_int(va_list argptr);
void print_float(va_list argptr);
void print_string(va_list argptr);

#endif /*ifndef VARIADIC_FUNCTIONS_H */
