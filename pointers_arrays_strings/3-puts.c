#include "main.h"

/**
 * _puts - imprime la cadena
 * @str: Cadena
 * Return: 0
 */
void _puts(char *str)
{
	int index = 0;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
