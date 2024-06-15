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
		abecedario++;
	}
	putchar('\n');

return (0);
}
