#include <stdio.h>
#include "function_pointers.h"
/**
  * print_name - function calling _print
  * @name: parameter to be printed
  * @f: function pointer
  *
  */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}

