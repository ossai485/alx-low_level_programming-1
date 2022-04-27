#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be searched for
 * @needle: substring to be located
 *
 * Return: return value
 */

char *_strstr(char *haystack, char *needle)
{
	int inex;

	if (*needle == 0)

		return (haystack);

	while (*haystack)
	{
		inex = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;
			}

			while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}
