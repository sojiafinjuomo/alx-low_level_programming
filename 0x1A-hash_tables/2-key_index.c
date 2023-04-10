#include "hash_tables.h"

/**
  * key_index - a function that gives you the index of a key.
  * @key: key to get the index
  * @size: size of the hash table
  * Return: index of the key
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

