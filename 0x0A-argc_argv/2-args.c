#include <stdio.h>

/**
 * main - prints the function
 * @argc: argument to counter an int
 * @argv: argument value determiner for char
 *
 * Return: always success
 */

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)

		printf("%s\n", argv[i]);

	return (0);
}
