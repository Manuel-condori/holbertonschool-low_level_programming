#include "holberton.h"
/**
 * _atoi - convert a string to an integer
 * @s: type char
 * Return: integer
 */
int _atoi(char *s)
{
	int signo = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
		{
			signo *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			num = (num * 10) + (*s - '0');
		}
		else if (num > 0)
			break;
	} while (*s++);

	return (num * signo);
}
