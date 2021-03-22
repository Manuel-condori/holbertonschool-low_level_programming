#include <stdio.h>
/**
 *main - Fibonacci sequence whose values do not exceed 4,000,000
 *Return: 0
 */
int main(void)
{
        int i;
        unsigned long int x = 0, y = 1, z = 1;

        for (i = 1; i <= 98; i++)
        {
                z = x + y;
                x = y;
                y = z;
                if (i < 98)
                {
                        printf("%li, ", z);
                }
        }
	printf("\n");
        return (0);
}
