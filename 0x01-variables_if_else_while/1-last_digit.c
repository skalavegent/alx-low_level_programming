#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
		int n;

		int m;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					m = n % 10;
					if (m > 5)
						printf("Last digit of %d is %d and is greater than 5\n", n, m);
					if (m == 0)
						printf("Last digit of %d is %d and is O\n", n, m);
					if (m < 6 && != 0)
						printf("Last digit of %d is %d and is less than 6 and not O\n", n, m);
					return (0);
}
