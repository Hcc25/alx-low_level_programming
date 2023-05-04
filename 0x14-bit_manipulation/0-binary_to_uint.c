#include "main.h"
/**
 * binary_to_uint - a function that converts a
 * binary number to an unsigned int
 * @b: a binary
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x;
	int var, bee;

	if (!b)
		return (0);
	x = 0;
	for (var = 0; b[var] != '\0'; var++)
		;
	for (var--, bee = 1; var >= 0; var--, bee *= 2)
	{
		if (b[var] != '0' && b[var] != '1')
		{
			return (0);
		}
		if (b[var] & 1)
		{
			x += bee;
		}
	}
	return (x);
}
