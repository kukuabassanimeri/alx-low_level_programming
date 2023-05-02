#include "lists.h"
/*function that frees a listint_t list.*/
/**
 * free_listint2 - frees our singly linked list
 *
 * @head: pointer to pointer parameter
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *transverse = *head;
	listint_t *tempadd;

	while (transverse != NULL)
	{
		tempadd = transverse->next;
		free(transverse);
		transverse = tempadd;
	}
	(*head) = transverse;
}
