#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
<<<<<<< HEAD
 * main -prints different values depending on the argv in the main function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char const *argv[])
{
    int i = 1;
    int save = 0;
    char sub;

    if (argc <= 1)
    {
        printf("0\n");
        return 0;
    }

    for (i = 1; i < argc; i++)
    {

            sub = *argv[i];
            printf("%d", sub);

            if (isdigit(*argv[i]) == 0)
            {
                printf("Error\n");
                return 1;
            }
            else
                save += atoi(argv[i]);

    }
    printf("%d\n", save);

    return 0;
=======
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
>>>>>>> 5b8ffb52e88d8b5a8b5a230eed5a2afe567fa0b1
}
