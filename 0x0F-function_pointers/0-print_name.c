#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: input params for name
 * @f: reps a function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
