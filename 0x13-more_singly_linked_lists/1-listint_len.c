#include "lists.h"
/**
 * listint_len - returns the number of elements
 * in a linked list
 * @h: a pointer
 * Return: the number of character
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
