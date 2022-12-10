#include <stdio.h>

/**
 *main- program that prints the alphabet in lowercase
 *Return: 0 for success
 *
 */

int main(void)
{

	char cha;

	for (cha = 'a'; cha <= 'z'; cha++)
	{/*a for loop for small alphabets*/

		putchar (cha);

	}
	putchar ('\n');

	return (0);
}
