#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings
 * @s1: char type
 * @s2: char type
 * Return: Pointer to allocated memory.
 */
char *str_concat(char *s1, char *s2)
{
	char *p1;
	unsigned int i, j, cp, r, final_leng;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	final_leng = i + j + 1;

	p1 = malloc(final_leng * sizeof(char));

	if (p1 == NULL)
		return (NULL);

	for (cp = 0; cp < i; cp++)
	{
		p1[cp] = s1[cp];
	}
	for (r = 0; r < j; cp++, r++)
	{
		p1[cp] = s2[r];
	}
	p1[final_leng] = s2[r];

	return (p1);
}

