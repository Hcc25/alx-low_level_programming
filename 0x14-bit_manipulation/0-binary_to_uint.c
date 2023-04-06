#include "main.h"
/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 * @b: a string
 * Return: the converted number, or 0 if the code fails
 */
unsigned int binary_to_uint(const char *b)
{
	int d;
	unsigned int e = 0;

	if (!b)
		return (0);
	for (d = 0; b[d]; d++)
	{
		if (b[d] < '0' || b[d] > '1')
			return (0);
		e = 2 * e + (b[d] - '0');
	}
	return (e);
}
