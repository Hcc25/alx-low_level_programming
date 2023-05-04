#index "main.h"
/**
 * get_bit - a function that returns the value of
 * a bit at a given index
 * @n: a bit being counted
 * @index: the begining of a bit
 * Return: -1 in case of an error otherwise
 * the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);
value = (n >> index) & 1;
return (value);
}
