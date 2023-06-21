#include <stdlib.h>
#include "function_pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;
if (!array || !action)
return;
while (i <= size)
{
action(array[i]);
i++;
}
}
