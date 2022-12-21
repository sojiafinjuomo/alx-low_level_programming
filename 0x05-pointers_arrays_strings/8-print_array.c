#include "main.h"
#include <stdio.h>
/**
  * print_array - function to print array
  * @a: pointer variable
  * @n: parameter
  *
  *
  */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		if (j == 0)
		{
			printf("%d", a[j]);
		}
		else
		{
			printf(", %d", a[j]);
		}
	}
	printf("\n");
}
