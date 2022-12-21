#include "main.h"
/**
  * puts_half - function to print half string
  * @str: pointer variable
  *
  */
void puts_half(char *str)
{
	int count;
	int i, j;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	if (count % 2 == 0)
	{
		for (i = count / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (count % 2)
	{
		for (j = (count - 1) / 2; j < (count - 1); j++)
		{
			_putchar(str[j + 1]);
		}
	}
	_putchar('\n');
}

