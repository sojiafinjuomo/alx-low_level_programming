#include "lists.h"
#include <stdlib.h>
/**
  * free_listint2 - function that frees a listint_t list.
  * @head: double pointer to struct node
  *
  *
  */
void free_listint2(listint_t **head)
{
	listint_t *temp1, *temp2;

	if (head == NULL)
		return;

	temp2 = *head;
	while (temp2 != NULL)
	{
		temp1 = temp2;
		temp2 = temp2->next;
		free(temp1);
	}
	*head = NULL;
}
