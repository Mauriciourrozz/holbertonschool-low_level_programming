#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() % 1000 - 100;


	printf("The number is: %d\n", n);

	if (n > 0);

{
        	printf("Is positive\n");
} 	else if (n < 0); 
{
                printf("Is negative\n");
}	else (); 
{
                printf("Is zero\n");
}		
         return (0);}
