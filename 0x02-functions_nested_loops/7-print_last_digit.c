#include "main.h"
/**
  * print_last_digit - prin last digit
  *
  * @int: int valu to be returned
  *
  * Return: the last digit of @last
  */
int print_last_digit(int)
{
	int i, last;

	last = i % 10;

	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last);
	return (last);
	}

}
