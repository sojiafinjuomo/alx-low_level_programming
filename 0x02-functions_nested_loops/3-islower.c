#include "main.h"

/**
 * _islower - entry point
 *
 * @c: argument
 *
 * int: data type
 *
 * Return: 0 and 1 for sucess
 *
 *
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);
}
