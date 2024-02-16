#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assigns a random number to variable n eachtime
 * it executed, and prints it
 * Return: Always 0 (success)
 */

/**
 * main: assigns a random number to variable n eachtime
 * and exucte it and prints it if it positive or negative
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	return (0);
}
