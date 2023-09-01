#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int total;
	unsigned int place = 1;

	if (b == '\0')
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '1')
			total += place;
		place *= 2;
		i++;
	}
	return 1;
}