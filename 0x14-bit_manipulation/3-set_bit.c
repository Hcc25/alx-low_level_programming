#include "main.h"
/**
 * set_bit - a function that sets the value of
 * a bit to 1 at a given index
 * @n: a number where the index sets the bit at
 * @index: an index from where the bit begins
 * Return: 1 if succesfull otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
