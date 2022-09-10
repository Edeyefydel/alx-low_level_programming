#include<stdio.h>
/**
 * main - Prints a hexadecimal string
 * Return: Always (Success)
 */

int main(void)
{
	char h;

	for (h = '0'; h <= '9'; h++)
	{
		putchar(h);
	}
	for (h = 'a'; h <= 'f'; h++)
	{
		putchar(h);
	}
	putchar('\n');
	return (0);
}
