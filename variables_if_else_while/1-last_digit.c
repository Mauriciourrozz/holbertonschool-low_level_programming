#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int un;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	un = n % 10;
	if (un > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, un);
	else if (un == 0)
		printf("Last digit of %d is %d and is 0\n", n, un);
	else if (un < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, un);
	return (0);
}
