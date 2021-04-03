#include "holberton.h"
/**
 * print_number - print an integer
 * @n: tipe int
 */
void print_number(int n)
{
	if (n > 9 && n < 100)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n > 99 && n < 1000)
	{
		_putchar(n / 100 + '0');
		_putchar(n / 10 + 8);
		_putchar(n % 10 + '0');
	}
	else if (n > 999 && n < 10000)
	{
		_putchar(n / 1000 + '0');
		_putchar(n / 100 - 30);
		_putchar(n / 10 - 52);
		_putchar(n % 10 + '0');
	}
	else if (n >= 0)
	{
		_putchar(n + '0');
	}
	else if (n < 0 && n > -10)
	{
		_putchar('-');
		_putchar(n + '0');

	}
	else if (n < -9 && n > -100)
	{
		_putchar('-');
		_putchar(n / 10 + 'B');
		_putchar(n % 10 + '@');
	}
}
