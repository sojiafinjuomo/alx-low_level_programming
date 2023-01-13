#include "main.h"
#include <stdlib.h>
/**
  * malloc_checked - function checks for malloc succcess or failure
  * @b: unsigned int
  * Return: Exit  Success or Failure
  */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
