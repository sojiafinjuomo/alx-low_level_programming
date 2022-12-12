#include <stdio.h>

/**
 *main- Entry point for code that prints all
 *possible combination of single digit numbers
 *
 *Return: 0 always success
 *
 *
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	
	{
		 putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');

		}

	}

	putchar('\n');

	return (0);
}
