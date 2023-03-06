#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area
 *  @s: string
 *  @b: the character to fill the area with
 *  @n: an integer
 *  Return: a string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
