#include <stdio.h>

/**
 *main - entry point to print hexidecimals
 *
 *Return: 0 always success
 *
 */

int main(void)
{
		int n;

		char ch;

		for  (n = 48; n <= 58; n++)

			putchar(n);
		for (ch = 'a';  ch <= 'f';  ch++)
			putchar(ch);

		putchar('\n');
		return (0);
}
