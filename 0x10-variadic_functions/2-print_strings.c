#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings.
 * @separator: const char type pointer.
 * @n: const unsigned int type.
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	char *str;
	unsigned int i;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("%p", str);
		if (separator != NULL && (i < n - 1 ))
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
