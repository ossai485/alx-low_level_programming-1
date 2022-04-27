#include "main.h"

/**
 * _memset - fill memory block with specific value
 * @s: the desired value
 * @b: the desired value
 * @n: number of bytes
 *
 * Return: return value
 */

char *_memeset(char *s, chat b, unsigned int n);
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
