#include "lists.h"
/*Write a function that adds a new node*/
/*at the beginning of a listint_t list.*/
/**
 * add_nodeint - function to add node at beginning
 *
 * @head: pointer to pointer parameter
 * @n: constant integer parameter
 *
 * Return: new pointer added but updates
 * the head of linked list at the beginning
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	newnode->n = n;
	newnode->next = NULL;
	if (newnode == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
	*head = newnode;
	}
	else
	{
		listint_t *current = *head;

		newnode->next = current;
	}
	(*head) = newnode;
	return (newnode);
}
