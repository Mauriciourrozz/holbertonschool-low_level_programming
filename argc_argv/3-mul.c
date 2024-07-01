#include <stdio.h>
#include <stdlib.h>
/**
 * main - empieza el programa
 * @argc: cuenta la cantidad de argumentos
 * @argv: argumentos
 * Return: 0
 *
 */
int main(int argc, char **argv)
{
	if (argc != 3) /* si es distinto de 3 imprime error, 3 porque espera dos argumentos y ademas de los dos argumentos esta el nombre del programa (argv[0])*/
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
