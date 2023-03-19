#include <stdio.h>
#include <stdlib.h>
/**
 * main - return alpbets except e and q
 * Return: 0 (Success)
 */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
		if (b != 'q' && b != 'e')
			putchar(b);
	putchar('\n');
	return (0);
}
