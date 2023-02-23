#include "main.h"
/**
 * print_diagonal - printing line
 * @n: integer prameter
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
