#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the list
 * Return: the number number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
