#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the numer of arguments of the main function 
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char const *argv[])
{
    int a, b, ans;

    if (argc != 3) 
    {
        printf("Error\n");
        return 1;
    }

    a = atoi(argv[1]);
    b = atoi(argv[2]);
    ans = a * b;   

    printf("%d\n", ans);
    
    return 0;
}