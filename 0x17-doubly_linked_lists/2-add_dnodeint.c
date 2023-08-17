#include "lists.h"
/**
  * add_dnodeint - function that adds a new node at the beginning of a list
  * @head: pointer pointing to the head
  * @n: represent data element
  *
  * Return: return newnode
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;
	if (*head != NULL)
		(*head)->prev = newnode;
	*head = newnode;
	return (newnode);
}

