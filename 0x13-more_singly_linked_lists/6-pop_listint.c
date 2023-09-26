#include "lists.h"

/**
 * pop_listint - A function that deletes the head of a node of a linked list
 * @head: The pointer to the first element in the linked list
 * Return The datta inside the elements deleted, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	int data = (*head)->n;
	listint_t *temp = (*head)->next;

	free(*head);
	*head = temp;

	return (data);
}
