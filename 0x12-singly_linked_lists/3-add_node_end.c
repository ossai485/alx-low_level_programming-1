#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * add_node_end - adds a new node
 * @head: double pointer
 * @str: string to put in new node
 *
 * eturn: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t nchar;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	new->len = nchar;
	new-> = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}

	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
