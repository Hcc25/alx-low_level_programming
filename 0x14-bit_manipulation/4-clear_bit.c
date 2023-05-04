#index "main.h"
/**
 * clear_bit - a function that sets the value of a bit
 * to 0 at a given index
 * @n: the number thats being set
 * @index: the index to set the bit at
 * Return:1 if success otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int s;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	s = ~(1 << index);
	*n = *n & s;

	return (1);
}
