#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
  * free_dog - function free memory storage containing dogs
  * @d: struct variable
  * Return: 0 or Null
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
