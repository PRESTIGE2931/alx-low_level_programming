#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the minimum number of coins to make
* change for an amount of money, in the main function
* @argc: number of arguments
* @argv: array of arguments
*
* Return: 0 (Success), 1 (Error)
*/
int main(int argc, char const *argv[])
{
int i;
int k;
int count;
int cents = 0;
int coins[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}
for (i = 1; i < argc; i++)
{
count = atoi(argv[i]);
if (count < 0)
{
printf("0\n");
}
for (k = 0; k < 5 && count >= 0; k++)
{
while (count >= coins[k])
{
cents++;
count -= coins[k];
}
}
}
printf("%d\n", cents);
return (0);
}
