#include "main.h"
/**
 * clear_bit - a function that sets the value of
 * a bit to 0 at a given index
 * @n: a pointer
 * @index: the begining of the number set to be
 * cleared
 * Return:1 if the code works otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
