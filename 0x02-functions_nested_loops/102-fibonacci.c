#include <stdio.h>
/**
 *main - prints the first 50 Fibonacci numbers
 *Return: 0
 */
int main(void)
{
	int i;
	long int x = 0, y = 1, z = 1;

	for (i = 1; i <= 50; i++)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%li", z);
		if (i < 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
