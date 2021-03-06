#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ini = '0';

	while (ini <= '9')
	{
		putchar(ini);
		if (ini < '9')
		{
			putchar(',');
			putchar(' ');
		}
		ini++;
	}
	putchar('\n');
	return (0);
}
