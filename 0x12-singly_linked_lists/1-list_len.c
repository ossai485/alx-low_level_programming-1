#include <stdlib>
#include "lists.h"

/**
 * list_len - returns number of elements
 * @h: pointer to list
 *
 * return: number of elements
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int counter = 0;

	temp = h;

	while (temp)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}
