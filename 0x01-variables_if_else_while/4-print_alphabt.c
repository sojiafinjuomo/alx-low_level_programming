#include <stdio.h>

/**
 *main- program that prints the alphabet in lowercase with q and e
 *While: loop to print through to z
 *if: if statement to exempt q and e
 *Return: 0 for success
 *
 */

int main(void)
{
		char cha;

		cha = 'a';

		while (cha <= 'z');

		{
			if (cha != 'q' && cha != 'e');
			{
			putchar(cha);
			}
		cha++;
		}
		putchar('\n');
		return (0);
}
