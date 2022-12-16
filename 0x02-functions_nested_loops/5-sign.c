#include "main.h"
/**
  * print_sign - Entry point
  *
  * int: data type
  *
  * @n: parameter
  *
  * if: conditional
  *
  * Return: Always 1 (success)
  */
int print_sign(int n)
{
	if (n > 0)
		printf("%d", '+');
	return (1);
	else if (n == 0)
		printf("%d", '0');
	return (0);
	else
		printf("%d", '-');
	return (-1);
}
