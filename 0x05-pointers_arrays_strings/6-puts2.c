#include "main.h"
#include <string.h>
/**
 * puts2 - prints every character of a string
 * @str: a parameter
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
