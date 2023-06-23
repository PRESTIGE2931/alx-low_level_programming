#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#define NULL ((void *)0)

/**
* print_numbers - prints numbers given as parameters
* @separator: string to be printed between numbers
* @n: number of integers passed to the function
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0, new = 0;

va_list agrs;
va_start(agrs, n);
for (i = 0; i < n; i++)
{
new = va_arg(agrs, int);
if (separator != NULL)
printf("%d%s", new, separator);
else
printf("%d", new);
}
printf("\n");
}
