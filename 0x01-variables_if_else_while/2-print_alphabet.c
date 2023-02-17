#include <stdio.h>
/**
* main - prints alphabets in lowercase
* return: Always (0)
*/
int main(void)
{
char lower;
for (lower = 'a'; lower <= 'z'; lower++)
{
putchar(lower);
}
putchar('\n');
return (0);
}
