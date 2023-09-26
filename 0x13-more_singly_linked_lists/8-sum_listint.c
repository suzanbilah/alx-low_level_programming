#include "lists.h"

/**
 * sum_listint - A functin that returns the sum of all the data of a linked
 * list
 * @head: The first node in the limked list
 *
 * Return: The resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
