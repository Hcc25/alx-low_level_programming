#include "main.h"
/**
 * flip_bits - counts the number of bits to change
 * @n: first number
 * @m: second number
 * Return: number of bitd to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int d, value = 0;
	unsigned long int first;
	unsigned long int second = n ^ m;

	for (d = 63; d >= 0; d--)
	{
		first =  second >> d;
		if (first & 1)
			value++;
	}
	return (value);
}
