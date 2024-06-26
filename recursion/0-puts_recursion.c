#include "main.h"

/**
 * _puts_recursion - imprime una cadena usando una recursion
 * @s: cadena
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* si el caracter esigual a nulo es pq llegamos al final de la cadena */
	{
		_putchar('\n'); /*imprimimos el salto de linea y retornamos para terminar la recursion*/
		return;
	}

	_putchar(*s); /*imprimimos el cara ter actual de la cadena*/
	_puts_recursion(s + 1); /*llamamos a la funcion recursivamente para que se imprima el resto de la cadena*/
}
