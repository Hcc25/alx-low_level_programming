#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;
	listint_t *new;
	listint_t hello = {8, NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		pritf("Error\n");
		return (1);
	}
	new->n = 9;
	new->next = head;
	n = print_listint(head);
	printf("-> %lu elements\nn", n);
	free(new);
	return (0);
}
