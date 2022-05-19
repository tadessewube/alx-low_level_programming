#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees the heap for a list
 * @head: linked list
 *
 * Return: none
 */
void free_list(list_t *head)
{
	list_t *tmp_node;

	while (head != NULL)
	{
		tmp_node = head, head = head->next;
		free(tmp_node->str), free(tmp_node);
	} free(head);
}
