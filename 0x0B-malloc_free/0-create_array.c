#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: int type
 * @c: Char type
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *p1;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	p1 = malloc(sizeof(char) * size);

	if (p1 == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			p1[i] = c;
		}
	}
	return (p1);

}
