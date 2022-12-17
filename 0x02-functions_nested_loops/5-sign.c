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
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
