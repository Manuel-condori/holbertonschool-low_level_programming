#include "holberton.h"
/**
 *print_line - draws a straight line in the terminal
 *@n: type int
 *
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		_putchar('_');
		if (n == 0 || n < 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
