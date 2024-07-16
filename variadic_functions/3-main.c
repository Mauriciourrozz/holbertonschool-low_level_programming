#include "variadic_functions.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("Mi salida:\n");
	print_all("fcsi", 3.14435, 'H', NULL, 402);
	printf("---------------------------------\nsalida esperada:\n");
/*	printf("3.144350, H, #Cisfun, 0\n");*/

	printf("3.144350, H, (nil), 402\n");

	return (0);
}
