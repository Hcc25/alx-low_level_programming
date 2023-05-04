#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a binary pointer to a string
 * Return: the converted number,
 * or 0 if there is one or more chars in the string
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int z, y, x;

	if (b == NULL)
		return (0);

	while (b[x])
		x++;
	while (x)
	{
		if (b[x - 1] != '0' || b[x - 1] != '1')
			return (0);
if (b[x - 1] == '1')
	z += y;
z *= 2;
x--;
	}
	return (y);
}
