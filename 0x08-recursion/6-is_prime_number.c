#include "main.h"

int check_prime(int, int);
/**
 * is_prime_number - prime identifier
 * @n: a parameter
 * Return: prime number
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
