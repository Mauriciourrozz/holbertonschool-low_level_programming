#include <stdio.h>

/**
 * main - abcABC
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	int num = '0';
	char abc = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (abc <= 'f')
	{
		putchar(abc);
		abc++;
	}
	putchar('\n');

return (0);
}
