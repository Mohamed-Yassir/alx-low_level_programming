#include "main.h"

/**
 * _strlen - return the length of a string
 *
 * @s: string parameter input
 *
 * Return: Length of string
 */

int _strlen(char *s)
{
	int lenstring;

	for (lenstring = 0; *s != '\0'; s++)
		++lenstring;

	return (lenstring);
}
