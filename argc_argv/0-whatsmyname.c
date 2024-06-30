#include <stdio.h>

/**
 * main - funcion que indica el inicio del programa
 * @argc: Parametro que cuenta los argumentos pasados al programa
 * (el 0 es el nombre del programa)
 * @argv: cadenas que contienen los argumentos que seran pasados al programa
 * Return: 0 (indicando que el programa termino bien)
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]); /*%s porque es el indicativo de printf de string y argv[0] porque argv es quien tiene los argumentos, y en el 0 es donde esta el nombre*/
	return (0);

}
