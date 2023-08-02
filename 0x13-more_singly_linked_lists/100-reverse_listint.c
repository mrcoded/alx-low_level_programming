#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: a pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv;
	listint_t *next;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prv;
		prv = *head;
		*head = next;
	}

	*head = prv;

	return (*head);
}
