#include <stdio.h>
#include "function_pointers.h"
/**
  * array_iterator - function that executes a function given
  * as a parameter on each element of an array.
  * @array: array
  * @size: size of array
  * @action: function pointer pointing to void datatype
  *
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
