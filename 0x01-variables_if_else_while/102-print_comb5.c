#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
	int i, j, l, m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (l = 0; l <= 9; l++)
			{
				for (m = 0; m <= 9; m++)
				{
					if (i <= l && j < m)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
						putchar(l + '0');
						putchar(m + '0');

						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	return (0);
}

