#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints a single digit of base 10
 * Return: 0 (Success)
 */
int main(void)
{
	int base_number;

	for (base_number = 0; base_number < 10; base_number++)
	{
		printf("%d", base_number);
	}

	printf("\n");

	return (0);
}
