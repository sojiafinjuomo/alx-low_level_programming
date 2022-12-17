#include "main.h"
/**
  * print_line - print straight line
  *
  * @n: parameter
  */
void print_line(int n)
{
	for (n = 1; n <= 12; n++)
	{
		if (n <= 0)
		{
			_putchar ('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
