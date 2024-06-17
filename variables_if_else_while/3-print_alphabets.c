#include <stdio.h>

/**
 * main - abcABC
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	char abc = 'a';
	char ABC = 'A';

	while (abc <= 'z')
	{
		putchar(abc);
		abc++;
	}
	while (ABC <= 'Z')
	{
		putchar(ABC);
		ABC++;
	}
	putchar('\n');

return (0);
}
