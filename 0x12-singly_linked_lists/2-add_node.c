#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - Function that returns the length of a string.
 * @s : s is a character
 * Return: Value is j
 */
int _strlen(const char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}

/**
 * add_node - Add a new node at beginning of a list_t list.
 * @head: Head of a list_t list.
 * @str: Value to insert into element.
 * Return: The number of nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);

	add->len = _strlen(str);
	add->next = *head;
	*head = add;

	return (add);
} /*authorMariah*/
