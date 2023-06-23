#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
*/
void print_all(const char *const format, ...)
{
va_list args;
unsigned int i = 0, len = 0;
char *sep = "", *str;
len = strlen(format);

va_start(args, format);
while (i < len)
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(args, int));
break;
case 'i':
printf("%s%d", sep, va_arg(args, int));
break;
case 'f':
printf("%s%f", sep, va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (!str)
str = "(nil)";
printf("%s%s", sep, str);
break;
default:
i++;
continue;
}
sep = ", ";
i++;
}
va_end(args);
printf("\n");
}
