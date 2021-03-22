#include <stdio.h>
/**
 *main - Fibonacci sequence whose values do not exceed 4,000,000
 *Return: 0
 */
int main(void)
{
	int i;
	long int x = 0, y = 1, z = 1;
	long int suma = 0;

	for (i = 1; i <= 32; i++)
	{
		z = x + y;
		x = y;
		y = z;
		if (z % 2 == 0)
		{
			suma += z;
		}
	}
	printf("%li\n", suma);
	return (0);
}
