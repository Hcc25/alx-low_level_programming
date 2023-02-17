#include <stdio.h>
/**
* main - prints alphabets in lowercase followed by a new line
* Return: Always 0 (Success)
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
