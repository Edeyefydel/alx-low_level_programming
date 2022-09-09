#include <stdio.h>
#include<stdlib.h>
#include <time.h>
/**
 * function main assign a random number 
 * its prints if number is negative or positive
 * return value is 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	if  (n < 0)
	{
		printf ("%d is negative\n", n);
	}
	return (0);
}

