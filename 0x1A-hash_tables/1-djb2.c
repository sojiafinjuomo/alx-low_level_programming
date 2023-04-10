#include "hash_tables.h"

/**
  * hash_djb2 - hash fn for djb2 algorithm
  * @str: string to hash
  * Return: hash calculated
  */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int k;

	hash = 5381;
		while ((k = *str++))
			hash = ((hash << 5) + hash) + k;
	return (hash);
}
