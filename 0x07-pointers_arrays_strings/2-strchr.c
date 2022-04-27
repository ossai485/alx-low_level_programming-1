#include "main.h"

/**
 * _strchr - locates character
 * @s: string input
 * @c: character to find
 * Return: pointer to first occurence
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			break;
	return (s[i] == c ? (s + i) : '\0');
}
