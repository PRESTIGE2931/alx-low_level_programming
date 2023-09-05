#define NULL  ((void*)0)

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * 
 * Return: (d) converted to int
*/
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int d = 0;

if (b == NULL)
return (0);
for (i = 0 ; b[i] != '\0' ; i++)
{
if (b[i] != '1' && b[i] != '0')
return (0);
}
for (i = 0 ; b[i] != '\0' ; i++)
{
d <<= 1;
if (b[i] == '1')
d += 1;
}
return (d);
}