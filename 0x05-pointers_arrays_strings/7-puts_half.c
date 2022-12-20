#include "main.h"
/**
  * puts_half - function to print half
  * @count: as index
  *
  */
void puts_half(char *str)
{
	int count;
	int i, j;

	count = 0;
	while (str[count] != '\n')
	{
		count++
	}
	if (count % 2 == 0)
	{
		for (i = count / 2; str[i] != '\n'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (count % 2)
	{
	

}
