#include "lists.h"

/**
 * get_nodeint_at_index - A functio that returns the node at certain index
 * in a linked list
 * @index: The index of the node to return
 * @head: the first node in the linked list
 * Return: The pointer to the node we are lookin for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i <  index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
