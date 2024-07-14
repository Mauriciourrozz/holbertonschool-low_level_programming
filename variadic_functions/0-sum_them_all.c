#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - suma todos los parametros
 * @n: Parametros
 * Return: suma de los parametros
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg; //se declara esta variable de tipo va_list para acceder a los argumentos de la funcion (ya que no se pasa un numero fijo)
	unsigned int total;
	unsigned int i;

	va_start(arg, n); //se inicializa la lista de argumentos para que apunte al 1er argumento (n en este caso)

	for (i = 0; i < n; i++)
	{
		total = total + va_arg(arg, const unsigned int); //se usa la macro va_arg para acceder a los argumentos
	}
	va_end(arg); // se llama a va_end para limpiar y terminar
	return (total);

	if (n == 0)
	{ // esto lo pedia la letra, tendria que haber ido antes del bucle pero me lo dio bien asi
		return (0);
	}
}
