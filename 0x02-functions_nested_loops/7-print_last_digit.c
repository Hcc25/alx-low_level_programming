#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @n: the passed arguments
 * Return: the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar(x + '0');
			return (n % 10);
