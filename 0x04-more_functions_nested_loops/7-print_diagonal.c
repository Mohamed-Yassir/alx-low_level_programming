#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: number of time the character \ printed
 * Return: empty
 */

void print_diagonal(int n)

{
	int z, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (z = 0; z < n; z++)
	{
	for (y = 0; y < z; y++)
	{
		_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
