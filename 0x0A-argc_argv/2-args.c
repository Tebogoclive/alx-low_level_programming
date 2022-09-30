#include "main.h"
#include <stdio.h>

/**
 * main - Prints every argument it recieves
 * @argc: number of command line arguments
 * argv: array that contains the program command line
 * Return: 0 on success
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);

	return (0);
}
