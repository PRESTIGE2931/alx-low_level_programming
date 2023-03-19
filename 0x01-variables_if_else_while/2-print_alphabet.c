#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns lowercase alphabets
 * Return: 0 (Succes)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
