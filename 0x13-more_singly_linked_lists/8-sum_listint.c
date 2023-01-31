#include "lists.h"
/**
  * sum_listint - function that returns the sum
  * of all the data (n) of a listint_t linked list
  * @head: pointer to node
  * Return: return sum
  *
  */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int n, i, sum = 0;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != 0)
	{
		n = temp->n;
		sum = sum + n;
		temp = temp->next;
		i++;
	}
	return (sum);

}
