#include "main.h"
/**
  * print_diagonal - prints diagonal n times
  *
  * @n: number of times
  *
  * Return: No value
  */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\"');
		_putchar("\n");
		}
	}
}

