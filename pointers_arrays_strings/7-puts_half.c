#include "main.h"
/**
 * puts_half - imprime la mitad de la cadena
 * @str: cadena
 */
void puts_half(char *str)
{
	int n;
	int a;

	for (n = 0; str[n] != '\0'; n++)
	{

	}
	if (n % 2 == 0)
		a = n / 2;

	else
	{
		a = (n - 1) / 2;
		a++;
	}

	for (; a < n; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');

}
