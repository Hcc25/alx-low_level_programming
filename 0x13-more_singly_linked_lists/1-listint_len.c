#include "lists.h"
#include <stdio.h>
/**
 * listint_len - returns the length in a linked list
 * @h: a pointer
 * Return: the number of character
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
