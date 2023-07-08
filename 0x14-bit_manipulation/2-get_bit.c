#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to be checked
 * @index:  is the index, starting from 0 of the bit you want to get
 * 
 * Return: (converted) value of n in bits
 */
int get_bit(unsigned long int n, unsigned int index)
{
int convert;

if (index > 63)
return (-1);
convert = (n >> index) & 1;
return (convert);
}