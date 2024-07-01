#include <stdio.h>
#include <stdlib.h>
/**
 * main - empieza el programa
 * @argv: argv
 * @argc: argc
 * Return: 0
 */
int main(int argc, char **argv[])
{
	if (atoi(argc) > 2)
	{
		printf("%d\n", atoi(argv[1]) + atoi(argv[2]);
		return (0);
	}
	else
	{
		printf("error\n");
		return (1);
	}
}
