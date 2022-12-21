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
		printf("%d %d %d", a[n], ',', ' ');
	}
	printf("\n");
}
