#include "main.h"

/**
 * puts2 - imprime los numeros pares
 * @str: Numeros pares
 *
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
