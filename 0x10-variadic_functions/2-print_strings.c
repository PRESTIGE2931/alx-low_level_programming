#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#define NULL ((void *)0)

/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
char *new;

va_list agrs;
va_start(agrs, n);
for (i = 0; i < n; i++)
{
new = va_arg(agrs, char *);
if (separator != NULL)
printf("%s%s", new, separator);
else
printf("%s", new);
}
va_end(agrs);
printf("\n");
}
