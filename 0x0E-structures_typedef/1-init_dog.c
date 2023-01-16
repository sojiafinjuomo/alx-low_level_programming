#include "dog.h"
#include <stdio.h>
/**
  * init_dog - a function that initialize a variable of type struct dog
  * @d: struct variable
  * @name: member of struct dog *d
  * @age: member2 of struct dog *d
  * @owner: member3 of struct dog *d
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
