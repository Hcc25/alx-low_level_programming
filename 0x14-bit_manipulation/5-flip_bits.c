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
	unsigned int xor = n ^ m, fliped;

	while (xor > 0)
	{
		fliped += (xor & 1);
		xor >>= 1;
	}
	return (fliped);
}
