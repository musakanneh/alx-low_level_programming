#include "holberton.h"
#include <stdio.h>

int main(void)
{
	char s1[98];
	char *p;

	p = _strcpy(s1, "First, solve the problem. Then, write the code\n");
	printf("%s", s1);
	printf("%s", p);
	return (0);
}
