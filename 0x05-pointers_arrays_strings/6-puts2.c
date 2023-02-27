#include "main.h"
/**
 * puts2 - prints every characterof a string
 * @str: a parameter
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (int i = 0; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
