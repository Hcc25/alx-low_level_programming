#include "main.h"
/**
 * print_triangle - prints a triangle pattern
 * @size: integer parameter
 */
void print_triangle(int size)
{
	int size, i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (int i = 1; i <= size; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			_putchar('#');
		}
	}
}
