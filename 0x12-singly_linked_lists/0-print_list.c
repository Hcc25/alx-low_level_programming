#include <stdio.h>
#include "lists.h"
/**
 * print_list - Prints all elements of a list
 * @h: Pointer to a list
 * Return: The number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t nelem;

nelem = 0;
while (h != NULL)
{
	if (h->str == NULL)
		printf("[%d] %s\n", 0, "(nil)");
	else
		printf("[%d] %s\n", h->len, h->str);
	h = h->next;
	nelem++;
}
return (nelem);
}
