#include "main.h"

/**
 * set_bit - sets value of a bit
 * @n: a pointer to a bit
 * @index: the index to a set value
 *
 * Return: if an error ocurs - -1
 * otherwise -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index >= (sizeof(unsigned long int0 * 8))
			return (-1);

			*n ^= (1 << index);

			return (1);
			}
