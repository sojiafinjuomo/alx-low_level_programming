#include "main.h"
/**
  * print_last_digit - prin last digit
  *
  * @i: digit to be printed
  *
  * Return: the last digit of @i
  */
int print_last_digit(int i)
{
	int last;

	last = i % 10;

	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
