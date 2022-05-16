#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print name
 * @name: name of pointer
 * @f: is pointer
 * Return: nothing
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	else
	{
		f(name);
	}
}
