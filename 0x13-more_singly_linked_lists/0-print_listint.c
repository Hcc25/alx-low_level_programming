#include "lists.h"
/**
 * print_listint - prints characters of a linked list
 * @h: linked list of the type listint_t to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t dig = 0;

	while (h)
	{
		printf("%d\n", h->n);
		dig++;
		h = h->next;
	}
	return (dig);
}
