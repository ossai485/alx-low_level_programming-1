#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * add_nodeint - adds a node
 * @head: a pointer to the pointer
 * @n: the integer
 * Return: the address
 */

listint_t *add_nodeint(listint_t**head, const int n)
{
	listint_t *l;

	l = malloc(sizeof(listint_t));

	if (l)
	{
		l->n = n;
		l->next = *head;
		*head = l;
	}

	return (l);
}
