#include "lists.h"

/**
 * add_dnodeint - add a node at the head of the list
 * @head: memory of the head of the linked list
 * @n: integer data
 *
 * Return: head of the list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (head == NULL || new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head != NULL)
	{
		new->next = *head;
		(*head)->prev = new;
	}

	*head = new;

	return (*head);
}
