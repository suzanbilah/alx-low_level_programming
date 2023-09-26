#include "lists.h"

/**
 * pop_listint - A function that deletes the head of a node of a linked list
 * @head: The pointer to the first element in the linked list
 * Return The datta inside the elements deleted, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (!head || !*head)
		return (0);

	temp = (*head)->next;

	data = (*head)->n;

	free(*head);

	*head = temp;

	return (data);
}
