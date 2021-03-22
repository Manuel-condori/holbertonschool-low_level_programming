#include <stdio.h>
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
					if ((a * b) < 10 && (b != 0))
					{
						printf("  %i", (a * b));
					}
					else if ((a * b) < 100)
					{
						printf(" %i", (a * b));
					}
					else
					{
						printf("%i", (a * b));
					}
					if (b != n)
					{
						printf(", ");
					}
						b++;
				}
				a++;
				printf("\n");
		}
	}
}
