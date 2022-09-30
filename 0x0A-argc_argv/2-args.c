#include <stdio.h>
#include <stdlin.h>

/**
* main - Prints every argument it recieves
* @argc: argument count
* argv: argument vector
* Return: 0 on success
*/

int main(int argc, char **argv)

{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
