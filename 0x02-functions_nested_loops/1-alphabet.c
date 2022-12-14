#include "main.h"

/**
 * print alphabet - does just that
 *
 * using putchar &loop
 *
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)

		_putchar(ch);

	_putchar('\n');

}
