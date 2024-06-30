#include <stdio.h>

/**
 * main - comienzo de la funcion
 * @argc: contiene el numero de argumentos
 * @argv: contiene los argumentos
 * Return: 0
 */
int main(int argc, char *argv[]) /*defino funcion main y parametros */
{            /*argc contiene la cantidad de argumentos que se pasanal programa y argv los argumentos */
	(void)argv; /* void argv porque como en el codigo no usamos argv al compilar no nos saltara error */
	printf("%d\n", argc - 1); /* imprimimos, %d porque es el indicador de un entero y argc porque es quien contiene la cantidad de argumentos, -1 porque argc tambien cuenta el nombre del programa y no queremos eso*/
	return (0);
}
