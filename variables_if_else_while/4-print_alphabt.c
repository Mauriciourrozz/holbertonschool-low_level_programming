#include <stdio.h>

/**
 * main - abcdfghijklmnoprstuvwxyz
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	char letra = 'a';

	while (letra <= 'z')
	{
		if (letra != 'e' && letra != 'q')
		{
			putchar(letra);
		}
	letra++;
	}
putchar('\n');
return (0);
}
