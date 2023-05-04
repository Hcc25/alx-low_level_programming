#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed
 * Return: Binary
 */
void print_binary(unsigned long int n)
{
	int x;
	int y;
	unsigned long int b;

	for (x = 63, x >= 0; x--)
	{
		b = n >> x;
		if (b & 1)
		{
			_putchar('1');
			y++;
		}
		else if (y)
			_putchar('0');
	}
	if (!y)
		_putchar('0');
}
