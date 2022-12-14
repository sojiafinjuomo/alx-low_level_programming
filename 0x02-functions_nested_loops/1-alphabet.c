#include "main.h"

/**
 *main- entry points to the programm
 *void- void for the print_alphabet function
 *
 *Return: Always nothing success
 *
 */

void print_alphabet(void)
{
	char ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
		
		_putchar(ch);
	
	_putchar('\n');

}
