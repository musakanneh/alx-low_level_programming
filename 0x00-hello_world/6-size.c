#include "stdio.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
    printf("Size of a Char: %d byte(s)\n", sizeof(char));
    printf("Size of an Int: %d byte(s)\n", sizeof(int));
    printf("Size of a Long: %d byte(s)\n", sizeof(long));
    printf("Size of a Long Long: %d byte(s)\n", sizeof(long long));
    printf("Size of a Float: %d byte(s)\n", sizeof(float));
    return (0);
}
