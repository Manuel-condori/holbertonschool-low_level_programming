#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - contains copy of a string as a parameter
 * @str: character string
 * Return: NULL if string is null, returns pointer to duplicated string
 */
char *_strdup(char *str)
{
	char *s;
	int i;
	int j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	s =  (char *)malloc(i * sizeof(*s) + 1);
		if (s == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < i; j++)
		{
			s[j] = str[j];
		}
	return (s);

}
