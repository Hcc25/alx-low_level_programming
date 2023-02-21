#include "main.h"
/**
* print_alphabet_x10 - prints alphabet 10 times
*/
void print_alphabet(void)
{
int ten;
char la;

for (ten = 0; ten <= 10; ten++)
	{
for (la = 'a'; la <= 'z'; la++)
_putchar(la);
_putchar('\n');
	}
}
