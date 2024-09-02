#include <stdio.h>

/**
 * main - Abecedario
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	char abecedario = 'z';

	while (abecedario >= 'a')

	{
		putchar(abecedario);
		abecedario--;
	}
	putchar('\n');

return (0);
}
