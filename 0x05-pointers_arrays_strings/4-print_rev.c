#include "main.h"
/**
  * print_rev - functio to reverse strings
  * @s: pointer variable
  *
  *
  */
void print_rev(char *s)
{
	int i;
	int j;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
