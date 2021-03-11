#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum of all its parameters.
 * @n: const unsigned int type.
 * Return: sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(valist, n);/*inicializa la lista de argumentos*/
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);/*obtiene el siguiente valor de arg */
	va_end(valist);/*limpiar*/
	return (sum);
}
