#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a new node
 * @head: the head of the double pointer
 * @n: adds the list
 * Return: NULL if the code fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *dig;

	if (head == NULL)
		return (NULL);
	dig = malloc(sizeof(listint_t));
	if (dig == NULL)
		return (NULL);
	dig->n = n;
	dig->next = *head;
	*head = dig;
		return (dig);
}

