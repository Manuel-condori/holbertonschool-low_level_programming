#include "holberton.h"
/**
 * print_alphabet-program that print alphabet.
 *
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}

	_putchar('\n');
}
