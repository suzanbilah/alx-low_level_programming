#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - A function that adds a new node at the beginning of a linked
 * list
 * @n: The data to insert in that new node
 * @head: The pointer to the first node in the list
 *
 * Return: The pointer to the new node, or NULL on fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	if (!head)
	{
		printf("head is NULL\n");
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		printf("malloc failed\n");
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		printf("List is empty, adding new node as the first node\n");
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	while (temp->next)
		temp = temp->next;

	temp->next = new_node;

	printf("Added a new node at the end of the list\n");

	return (new_node);
}
