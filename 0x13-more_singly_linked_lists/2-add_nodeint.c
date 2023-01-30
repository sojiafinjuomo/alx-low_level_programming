 #include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - function adds a new node at the
  * beginning of the linked list
  * @head: double pointer to struct node
  * @n: integer element of node
  * Return: return address of new element
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = (listint_t *)malloc(sizeof(listint_t));

	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);

}
