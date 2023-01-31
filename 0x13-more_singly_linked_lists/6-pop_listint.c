#include "lists.h"
#include <stdlib.h>
/**
  * pop_listint - function that deletes the head node
  * @head: double pointer to the stuct node
  * Return: return data n
  */
int pop_listint(listint_t **head)
{
	listint_t *temp1;
	int n;

	temp1 = *head;

	if (temp1 == NULL)
		return (0);
	temp1 = temp1->next;
	n = (*head)->n;
	free(*head);
	*head = temp1;
	return (n);
}
