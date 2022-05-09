#include <stdio.h>

/**
 * main - prints for the program
 * @argc: is a counter of argument for int
 * @argv: is a counter for value
 * Return: always success
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", (argc - 1));

	return (0);
}
