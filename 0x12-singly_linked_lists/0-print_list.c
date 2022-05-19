#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - print a linked list
 * @h:	linked list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	float tmp;

	while (h != NULL)
	{

		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		tmp++;
		h = h->next;
	}
	return (tmp);
}
