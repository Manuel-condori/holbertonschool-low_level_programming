#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char minus;
	char mayus;

	for (minus = 'a'; minus <= 'z'; minus++)
	{
		putchar(minus);
	}
	for (mayus = 'A'; mayus <= 'Z'; mayus++)
	{
		putchar(mayus);
	}

	putchar('\n');

	return (0);
}
