/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * 
 * Return: (ans) converted to int
*/
unsigned int binary_to_uint(const char *b)
{
int count;
unsigned int ans;

ans = 0;
if (!b)
return (0);
for (count = 0; b[count] != '\0'; count++)
{
if (b[count] != '0' && b[count] != '1')
return (0);
}
for (count = 0; b[count] != '\0'; count++)
{
ans <<= 1;
if (b[count] == '1')
ans += 1;
}
return (ans);
}