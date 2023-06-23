#include <stdarg.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
unsigned int i = 0, sum = 0;

va_list args;
va_start(args, n);
if(n ==0)
return (0);
while (i < n)
{
sum += va_arg(args, int);
i++;
}
va_end(args);
return sum;
}