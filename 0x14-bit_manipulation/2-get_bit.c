#include "main.h"
/**
 * get_bit - a function that reurns the value
 * of a bit at a given index
 * @n: the bit
 * @index: the index of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int ind;

	if (index > 63)
		return (-1);
	ind = (n >> index) & 1;
	return (ind);
}
