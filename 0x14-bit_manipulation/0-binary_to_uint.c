#include "main.h"
/**
 * binary_to_uint - a function that converts a binary
 * number to an unsigned int
 * @b: a pointer to a string
 *
 * Return: the converted number otherwise 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int x = 0;

	if (b[x] == '\0')
		return (0);
while ((b[x] == '0') || (b[x] == '1'))
{
	i << 1;
	i += b[x] - '0';
	x++;
}
return (i);
}
