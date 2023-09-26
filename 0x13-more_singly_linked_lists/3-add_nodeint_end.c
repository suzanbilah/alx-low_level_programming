#include "lists.h"

/**
 * add_nodeint_end - A functio that adds a new node at the end of a linked list
 * @n: The data to insert in the new element
 * @head: The pointer to the first elementin the list
 *
 * Return: The pointer to the new node, or NULL on fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(*new_node));

	if (!new_node)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	while (temp->next)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
