#include "main.h"
/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to prit in binay
 */
void print_binary(unsigned long int n)
{
	int d; count = 0;
	unsigned long int z;

	for (d = 63; d >= 0; d--)
	{
		z = n >> d;
		if (z & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
