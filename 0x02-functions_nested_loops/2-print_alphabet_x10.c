#include "main.h"
/**
 * print_alphabet_x10- Entry points to print alphabet
 *
 * ten times
 *
 *
 *
 */
void print_alphabet_x10(void)
{
	char ch;

	int i = 0;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch); 
		while (i < 11)
		{
			_putchar('\n');
			i++;
		}
	}
}
