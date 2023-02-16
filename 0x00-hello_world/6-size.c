#include <stdio.h>
/**
 * main - a program that prints various computer sizes using printf function
 * return 0 (Success)
 */
int main(void)
{
	char v;
	int w;
	long int x;
	long long int y;
	float z;
printf("Size of a char : %lu byte(s)\n", (unsigned long)sizeof(v));
printf("Size of an int : %lu byte(s)\n", (unsigned long)sizeof(w));
printf("Size of a long int : %lu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of a long long int : %lu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a float : %lu byte(s)\n", (unsigned long)sizeof(z));
return (0);
}
