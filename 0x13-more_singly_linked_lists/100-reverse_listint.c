#include "list.h"

/**
 * reverse_listint - A function that reverses a linked list
 * @head: The pointer to the first node in the list
 * Return: The pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *prev = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	8head = prev;

	return (*head);
}
