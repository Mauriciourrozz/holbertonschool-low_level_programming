#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - suma todos los parametros
 * @n: Parametros
 * Return: suma de los parametros
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int total;
	unsigned int i;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		total += va_arg(arg, const unsigned int);
	}
	va_end(arg);
	return (total);

	if (n == 0)
	{
		return (0);
	}
}
