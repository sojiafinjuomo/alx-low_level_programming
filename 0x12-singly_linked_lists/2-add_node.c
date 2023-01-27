#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include<,string.h>
/**
  * add_node -  function that adds a new node
  * at the beginning of a list_t list.
  * @head: pointing to the pointer
  * @str: head/link
  * Return: return head
  */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 0;

	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	while (i < strlen(str))
		i++;
	temp->len = i;
	temp->next = *head;
	*head = temp;
	return (*head);
}
