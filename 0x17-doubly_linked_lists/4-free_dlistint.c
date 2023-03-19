#include "lists.h"
/**
  * free_dlistint - function that frees a dlistint_t list
  * @head: pointer to the node
  *
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if(head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
