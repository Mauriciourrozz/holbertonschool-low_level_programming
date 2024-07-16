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
	print_all("fcsi", 3.14435, 'H', "#Cisfun", 0);
	printf("---------------------------------\nsalida esperada:\n");
	printf("3.144350, H, #Cisfun, 0\n");
	/*print_all("ceis", 'B', 3, "stSchool");*/
	return (0);
}
