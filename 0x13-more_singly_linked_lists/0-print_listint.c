#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints characters of a linked list
 * @h: linked list of the type listint_t to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
