#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all elements in a list
 * @h: a pointer head
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t dig = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		dig++;
	}
	return (dig);
}
