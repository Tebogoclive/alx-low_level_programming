#include "main.h"

void print_uint(unsigned int n);

/**
* print_number - prints an integer
*@n: The integer to print
*/

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	print_uint((unsigned int) n);
}
