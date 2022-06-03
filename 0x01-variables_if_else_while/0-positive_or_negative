#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - this assigns a random number to int n every time
 *it would execute and print it out
 *Return: 0 if successful
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
        	printf("%d is positive\n", n);
    	else if (n == 0)
        	printf("%d is zero\n", n);
    	else if (n < 0)
        	printf("%d is negative\n", n);
	return (0);
}
