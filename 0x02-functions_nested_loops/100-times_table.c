#include "holberton.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: tipo int.
 */
void print_times_table(int n)
{
	int a, b;

	if (n < 15 || n < 0)
	{

		a = 0;

		while (a <= n)
		{
			b = 0;
				while (b <= n)
				{
					if (b == 0)
					{
						_putchar(((a * b) % 10) + '0');
					}
					else if ((a * b) <= 9)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar((a * b) + '0');
					}
					else if ((a * b) <= 99)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(((a * b) / 10) + '0');
						_putchar(((a * b) % 10) + '0');
					}
					else
					{
						_putchar(',');
						_putchar(' ');
						_putchar(((a * b) / 100) + '0');
						_putchar((((a * b) / 10) % 10) + '0');
						_putchar(((a * b) % 10) + '0');
					}
				b++;
				}
		a++;
		_putchar('\n');
		}
	}
}
