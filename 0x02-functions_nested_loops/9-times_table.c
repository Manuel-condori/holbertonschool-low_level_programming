#include "holberton.h"
/**
 * times_table - prints the 9 times table.
 *
 * Return: 0.
 */
void times_table(void)
{
	int row;
	int col;
	int producto;
	int decenas;
	int unidades;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			producto = row * col;
			decenas = producto / 10;
			unidades = producto % 10;
			if (col == 0)
			{
				_putchar('0' + producto);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (producto < 10)
				{
					_putchar(' ');
				}
				else
				{
					_putchar ('0' + decenas);
				}
				_putchar ('0' + unidades);
			}
		}

	_putchar('\n');

	}
}
