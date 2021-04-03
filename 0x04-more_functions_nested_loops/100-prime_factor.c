#include<stdio.h>
/**
 * main - prints the largets prime factor of the number
 * Return: 0
 */
int main(void)
{
	long int numero = 612852475143;
	long int i;

	for (i = 2; numero > 1; i++)
	{
		while (numero % i == 0)
		{
			numero /= i;
		}
	}
	printf("%ld\n", i - 1);
	return (0);
}
