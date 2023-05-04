#include "main.h"
/**
 * flip_bits - a function that returns the number of bits you
 * would need to flip to get from one number to another
 * @n: a number
 * @m: another number
 *
 * Return: the number of bits that would be fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int n ^ m;
	unsigned long int bits;
	int x, y;

	for (x = 63; x >= 0; x--)
	{
		bits = n ^ m >> 1;
		if (n ^ m & 1)
			y++;
	}
	return (y);
}
