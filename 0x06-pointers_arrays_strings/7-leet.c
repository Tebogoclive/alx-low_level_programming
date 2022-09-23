#include "main.h"

/**
* leet - encodes a string into 1337
* @s: string to encode
*
* Return: adress 0f s
*/
char *leet(char *s)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == *(s + 1))
				*(s + i) = b[j];
		}
	}
	return (s);
}
