#include <stdio.h>

/**
 * main - Abecedario
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	char abecedario = 'a';

	while (abecedario <= 'z')

	{
		putchar(abecedario);
		putchar('\n');
		abecedario++;
	}
return (0);
}
