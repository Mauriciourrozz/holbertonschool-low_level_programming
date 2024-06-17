#include <stdio.h>

/**
 * main - comb
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	int num = '0';
	int coma = ',';
	int esp = ' ';

	while (num <= '9')
	{
		putchar(num);
		if (num != '9')
		{
			putchar(coma);
			putchar(esp);
		}
		num++;
	}
	putchar('\n');
return (0);
}
