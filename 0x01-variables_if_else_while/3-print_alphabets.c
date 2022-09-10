#include<stdio.h>
#include<unistd.h>
/**
 * main - Entry point
 * Description: prints alphabet in lowercase then uppercase
 * Return: Always 0 (success)
 */

int main(void)
{
	int alPH;

	for (alPH = 'a'; alPH <= 'z'; alPH++)
	{
		putchar(alPH);
	}
	for (alPH = 'A'; alPH <= 'Z'; alPH++)
	{
		putchar(alPH);
	}
	putchar('\n');
	return (0);
}
	

