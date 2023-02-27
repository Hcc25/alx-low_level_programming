#include "main.h"
/**
 * puts2 - prints every characterof a string
 * @str: a parameter
 */
void puts2(char *str)
{
	int i;

	for (int i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
