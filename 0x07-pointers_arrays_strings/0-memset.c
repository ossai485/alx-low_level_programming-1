#include "main.h"

/**
 * _memset - fill block of memory with constant value
 * @s: fill adrress of memory\
 * @b: desired value
 * @n: number of bytes
 *
 * Return: return value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
