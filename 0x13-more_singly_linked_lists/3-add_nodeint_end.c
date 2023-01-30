#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint_end -  function that adds a new node
  * at the end of a listint_t list
  * @head: double pointer to the struct node
  * @n: element of node
  * Return: return address of new element
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *newnode;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (head == NULL)
		return (NULL);
	if (!newnode)
	{
		return (NULL);
	}
	else
	{
		newnode->n = n;
		newnode->next = NULL;
	}
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		temp = *head;
		while (temp->next != 0)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
	return (newnode);
}
