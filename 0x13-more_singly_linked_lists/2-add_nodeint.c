#include "lists.h"

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
	if (head == NULL)
		return (NULL);

	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
