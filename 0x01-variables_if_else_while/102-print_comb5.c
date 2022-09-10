#include<stdio.h>
/**
 * main - Prints 3 combination of numbers
 * Return: Always (Success)
 */

int main(void)
{
	int c, i, k, g;


	for (c = '0'; c <= '9'; c++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (g = '0'; g <= '9'; g++)
				{
					if (c < i && i < k && k < g)
					{
						putchar(c);
						putchar(i);
						putchar(k);
						putchar(g);
						if (c != '7')
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return(0);
}
