#include <stdlib.h>

#include <time.h>

/* more headers goes there */
#include <stdio.h>



/* betty style doc for function main goes there */

/**
 * main- This program will assign a random number to the variable
 * Return: 0 for success
 */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

				printf("Last digit of %d is %d " , n, n % 10);

				if (n % 10 > 5)

					printf("and is greater than 5\n");

				else if (n % 10 == 0)

					printf("and is 0\n");

				else if (n % 10 < 6 && n % 10 != 0)

					printf("and is less than 6 and not 0\n");

				return (0);

}
