#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

int _strlen(const char *s);

/**
 * add_node - put a new node after head
 * @head: double pointer to  head
 * @str: string
 *
 * Return: adress of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;

	if (head == NULL)
		return (NULL);

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str), n_node->len = _strlen(str);

	n_node->next = *head, *head = n_node;

	return (n_node);
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
