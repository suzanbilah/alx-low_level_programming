#include "list.h"

/**
 * delete_nodeint_at_index - A function that deletes a node in a linked
 * list at a certain index
 * @index: The index of the node to delete
 * @head: The pointer to the first element in the list
 * Return: 1 (On success) or -1 (On fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint_t *current = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
