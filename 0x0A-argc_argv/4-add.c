#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* main -prints different values depending on the argv in the main function
* @argc: number of arguments
* @argv: array of arguments
*
* Return:(0) success
*/
int main(int argc, char const *argv[])
{
int i = 1;
int save = 0;

if (argc <= 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
if (isdigit(*argv[i]) == 0)
{
printf("Error\n");
return (1);
}
else
save += atoi(argv[i]);
}
printf("%d\n", save);
return (0);
}
