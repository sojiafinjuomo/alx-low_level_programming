#include "main.h"
/**
  * print_numbers - Entry point
  *
  * void : type
  *
  *_putchar : print output
  *
  * Return: Always 0 (suceess)
  */
void print_numbers(void)
{
	char ch;

	for (ch = 48; ch <= 57; ch++)
		_putchar(ch);
		_putchar('\n');
}
