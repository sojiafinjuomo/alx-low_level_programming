#include "main.h"
/**
  * swap_int - function to swap
  * @a: parameter
  * @b: second parameter
  * Return: Always 0
  */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
