#include <stdio.h>

/**
 * main - Prints the alphabetic
 * Return: Always (Success)
 */
int main(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
