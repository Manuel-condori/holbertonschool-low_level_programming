#include "holberton.h"
/**
 * print_number - print an integer
 * @n: tipe int
 */
void print_number(int n)
{
	unsigned int numero = n;

	if (n < 0)
	{
		_putchar('-');
		numero = -numero;
	}

	if ((numero / 10) > 0)
		print_number(numero / 10);

	_putchar((numero % 10) + '0');
}
