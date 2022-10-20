#include "lists.h"
void constructor_func(void)__attribute__((constructor));
/**
* constructor_func - executes before main using hte constructor attribute
*/
void constructor_func(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
