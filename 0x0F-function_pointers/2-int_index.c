#include <stdio.h>
#include "function_pointers.h"
/**
  * int_index - function that searches for an integer
  * @array: array
  * @size: size of array
  * @cmp: function pointer to int
  * Return: return -1 if size<=0  or no element matches
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (cmp != NULL && array != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]) != 0)
				{
					return (i);
				}
			}
		}
	}
	return (-1);


}
