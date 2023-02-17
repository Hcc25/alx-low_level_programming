#include <stdio.h>
/**
 * main - a program that prints the size of various types on the computer
 * Return: 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of char %zu", sizeof (a));
printf("suze of int %zu" , sizeof (b));
printf("Size of long int %zu", sizeof (c));
printf("Size of long long int %zu", sizeof (d));
printf("Size of float %zu", sizeof (f));
return (0);
}
