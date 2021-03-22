#include <stdio.h>
/**
 *main - Fibonacci sequence whose values do not exceed 4,000,000
 *Return: 0
 */
int main(void)
{
	int i;
	long int x = 0, y = 1, z = 1;

	for (i = 1; i <= 32; i++)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%li", z);
		if (i < 32)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
