#include <stdio.h>
/**
* main - prints the alphabet in lowercase, and then in uppercase
* Return: Always 0
*/
int main(void)
{
char lower;
for (lower = 'a'; lower <= 'z'; lower++)
putchar(lower);
for (lower = 'A'; lower <= 'Z'; lower++)
putchar(lower);
putchar('\n');
return (0);
}
