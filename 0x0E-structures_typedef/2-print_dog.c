#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
  * print_dog - function to print struct dog
  * @d: struct variable
  * Return: 0 or Null
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age < 0)
		printf("(nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("(nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
