#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/*
* *malloc_check - allocates memory using malloc
* @b: this is the number of space to allocate
*
* Return (a pointer to the allocated memory) on success and (98) on Error
*/
void *malloc_checked(unsigned int b)
{
    void *pointer_to_memory;

    pointer_to_memory = malloc(b);
    if (pointer_to_memory == NULL)
        exit(98);

    return (pointer_to_memory); 
}