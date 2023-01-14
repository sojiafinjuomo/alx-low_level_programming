#include "main.h"
#include <stdlib.h>
/**
  * array_range - function that creates an array of integers
  * @min: minimum integer
  * @max: maximum integer
  * Return: if min > max or malloc fail, return Null
  */
int *array_range(int min, int max)
{
	int *ptr;
	int size, i;

	size = (max - min) + 1;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = i + 1;
	return (ptr);

}
