#include "holberton.h"
/**
 *print_diagonal - draws a diagonal line.
 *@n: ype int
 */
void print_diagonal(int n)
{
	int x, z;

	for (x = 1; x <= n; x++)
	{
		for (z = 2; z <= x; z++)
		{
			_putchar(' ');
		}
		_putchar(92);
		 _putchar('\n');
	}
	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
}
