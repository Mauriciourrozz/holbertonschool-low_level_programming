#include <stdio.h>

/**
 * main - donde comienza la funcion
 * @argc: contiene la cantidad de argumentos
 * @argv: contiene los argumentos
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a = 0;

	while (a < argc && argv[0])
	{
		printf("%s\n", argv[a]);
		a++;
	}
	return (0);
}
