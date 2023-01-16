#include "dog.h"
#include <stdio.h>
/**
  * print_dog - function to print struct dog
  * @d: struct variable
  * Return: 0 or Null
  */
void print_dog(struct dog *d)
{
	if (d->age < 0 || d->owner == NULL)
		printf("(nil\n");
	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);

}

