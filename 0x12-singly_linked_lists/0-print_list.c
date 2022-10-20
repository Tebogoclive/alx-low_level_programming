#include "lists.h"
/**
* print_list - print list items
* @h: list
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
