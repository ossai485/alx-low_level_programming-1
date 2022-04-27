#include "main.h"

/**
 * _memcpy - function that copies memory
 * @dest: memory it is stored
 * @src: memory it is copied
 * @n: number of bytes
 *
 * Return: return value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
