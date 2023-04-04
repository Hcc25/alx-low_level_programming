#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - function that frees a listint_t list
 * @head: a double pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *dig;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		dig = (*head)->next;
		free(*head);
		*head = dig;
	}
}
