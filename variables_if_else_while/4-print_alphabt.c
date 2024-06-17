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
		if (letra != 'e')
		{
			putchar(letra);
			letra++;
		}
		if (letra != 'q')
		{
			putchar(letra);
			letra++;
		}
	letra++;
	}
return (0);
}
