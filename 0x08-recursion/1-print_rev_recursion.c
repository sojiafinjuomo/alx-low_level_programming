#include "main.h"
#include <string.h>
/**
  * _print_rev_recursion - function that prints a string in reverse.
  * @s: holds the string
  *
  */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
		_putchar('\n');
}
