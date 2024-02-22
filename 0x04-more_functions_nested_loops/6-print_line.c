#include "main.h"
#include <stdio.h>

/**
 * print_line - prints stright line
 * @n: the number of lines to draw
 * Return: empty
 */

void print_line(int n)
{
	int y;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (y = 0; y < n; y++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}
