#include "main.h"
/**
  * rev_string - function to revearse string
  * @s: string to be reversed
  * Return: nothing
  *
  */
void rev_string(char *s)
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
	return;
}
