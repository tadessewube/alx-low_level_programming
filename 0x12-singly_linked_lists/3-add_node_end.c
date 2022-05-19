#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

int _strlen(const char *s);

/**
 * add_node_end - add nodes at the end of a list
 * @head: head of the list
 * @str: string of property
 *
 * Return: linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node;
	list_t *tmp_node = *head;

	if (head == NULL)
		return (NULL);

	last_node = malloc(sizeof(list_t));
	if (last_node == NULL)
		return (NULL);

	last_node->str = strdup(str), last_node->len = _strlen(str);
	last_node->next = NULL;

	if (*head == NULL)
	{
		*head = last_node;
		return (last_node);
	}

	while (tmp_node->next != NULL)
		tmp_node = tmp_node->next;

	tmp_node->next = last_node;
	return (last_node);
}

/**
 * _strlen - show the lenght of a string
 * @s: pointe to  pass the array
 *
 * Return: none
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		++i;
	return (i);
}
