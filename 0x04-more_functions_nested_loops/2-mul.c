#include "main.h"
/**
  * mul- entry point
  *
  * @a: parameter
  *
  * @b: parameter
  *
  * Return: 1 Always success
  */

int mul(int a, int b)
{
	int prod;

	prod = (a * b);
	_putchar(prod);

	_putchar('\n');
	return (prod);
}
