#include "lists.h"
/**
  * add_dnodeint_end - function that adds a new node at the end of a list
  * @head: pointer to a head pointer
  * @n: constant data element of the node
  * Return: return newnode or NULL if empty
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *lastnode;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	lastnode = *head;
	while (lastnode->next != NULL)
		lastnode = lastnode->next;
	lastnode->next = newnode;
	newnode->prev = lastnode;

	return (newnode);
}
