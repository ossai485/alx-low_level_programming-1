#include "main.h"
#include <string.h>

/**
 *_strlen - checks string length
 *@s: input
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int length = 0;

	while(*s != 0)
	{
		length++;
		s++;
	}

	return(length);
}
