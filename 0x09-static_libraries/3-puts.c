#include "main.h"
/**
  * _puts - function for puts
  * @str: pointer parameter
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
