#include "main.h"
/**
  * _puts - function for puts
  * @s: pointer parameter
  */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
