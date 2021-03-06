#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: variable type int.
 * Return: 0.
 */
int print_last_digit(int n)
{
	int ul = n % 10;

	if (ul < 0)
		ul = ul * -1;
		_putchar(ul + '0');
		return (ul);
}
