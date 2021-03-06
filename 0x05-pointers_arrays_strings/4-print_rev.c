#include "holberton.h"

/**
 * print_rev - prints a string, in reverse.
 * @s: Type char
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

	}
	i--;
	while (s[i] != 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
