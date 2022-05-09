#include <stdio.h>

/**
 * main - a program that prints its name
 *
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i = argc - argc;

	printf("%s\n", argv[i]);

	return (0);
}
