#include <stdio.h>
#include "function_pointers.h"

/**
*array_iterator - print integer
*@array: pointer to int
*@action: pointer to function
*@size: size of array
*
* return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
