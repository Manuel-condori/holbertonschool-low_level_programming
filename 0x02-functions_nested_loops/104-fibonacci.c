#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long x = 0, y = 1, z = 0;
	unsigned long i;
	unsigned long x2, y2, x2_2, y2_2, suma1, suma2;

	for (i = 1; i <= 91 ; i++)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%lu, ", z);
	}
	for (i = 92; i <= 98 ; i++)
	{
		if (i == 92)
		{
		x2 = x / 10000000000;
		x2_2 = x % 10000000000;
		y2 = y / 10000000000;
		y2_2 = y % 10000000000;
		}

		suma1 = x2 + y2;
		suma2 = x2_2 + y2_2;
		printf("%lu%lu", suma1, suma2);
		x2 = y2;
		x2_2 = y2_2;
		y2 = suma1;
		y2_2 = suma2;
		if (i < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
