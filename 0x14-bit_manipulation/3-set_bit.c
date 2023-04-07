#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: a pointer
 * @index: index of the bit to the set 1
 * Return: 1 for success, -1 if the code fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
