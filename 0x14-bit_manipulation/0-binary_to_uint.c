#include "holberton.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: string to cenvert.
 * Return: The converted number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num_retur = 0;
	unsigned int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '1')
		{
			num_retur = (num_retur * 2) + 1;
			i++;
		}
		else if (b[i] == '0')
		{
			num_retur = (num_retur * 2);
			i++;
		}
		else
			return (0);

	}

	return (num_retur);
}
