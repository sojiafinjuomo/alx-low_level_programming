#include <stdio.h>

/**
 *main- prints the alphabet in lowercase and upperase
 *Return: 0 for success
 */

int main(void)
{

	char cha;
	char ucha;

		for (cha = 'a'; cha <= 'z'; cha++)
		{
			putchar(cha);
		}

		for (ucha = 'A'; ucha <= 'Z'; ucha++)
		{
			putchar(ucha);
		}
		putchar ('\n');

		return (0);
}
