#include "lists.h"
/**
  * get_nodeint_at_index - function that returns the
  * nth node of a listint_t linked list
  * @head: pointer to the node
  * @index: nth node
  * Return: return nth node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i != index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		i++;
	}
	return (head);

}
