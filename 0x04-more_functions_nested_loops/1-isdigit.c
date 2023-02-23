#include "main.h"
/**
 * _isdigit - a function to check for a digit
 * @c: an integer argument
 * Return: 1, 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
