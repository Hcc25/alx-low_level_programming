#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints characters of a linked list
 * @h: linked list of the type listint_t to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int d;

	d = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		d++;
		h = h->next;
	}
	return (d);
}
