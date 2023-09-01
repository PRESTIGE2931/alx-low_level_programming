#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index. 
 * @n: num complement 0 to 1
 * @index: is the index, starting from 0 of the bit you want to set
 * 
 * Return: (1) Success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int i;

if (index > 63)
return (-1);
i = 1 << index;
*n = *n | i;
return (1);
}