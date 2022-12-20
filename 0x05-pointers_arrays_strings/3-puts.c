#include "main.h"
/**
  * _puts - function prints string
  * @str: pointer variable
  *
  *
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
