#include "lists.h"
/*Write a function that adds a new node at the end of a listint_t list.*/
/**
 * add_nodeint_end - the function
 *
 * @head: first parameter
 * @n: second  parameter
 *
 * Return: pointer to the new node or NULL
 * if it does not exist
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newnode;
	}
	return (newnode);
}
