#include "MAIN.h"
/**
  * print_square - print square using #
  *
  * @size: print sqaure size times
  *
  * Return: No return
  */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar('#');
		}
	}
	_putchar('\n');
}
