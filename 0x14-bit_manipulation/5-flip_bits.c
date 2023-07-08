#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
* @n: number to check
* @m: number to check

* Return: (count) Number of bits to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int sub = n ^ m, ration = 1;
unsigned int i, count = 0;

for (i = 0 ; i < 64 ; i++)
{
if (ration == (sub & ration))
count++;
ration <<= 1;
}
return (count);
}