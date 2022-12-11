/**
 * main print all possible combination of single-digit number
 * Return: Always return  SUCCESSFUL MGE
 */

#include <stdio.h>

int main(void)
{
	int j;

	for (j = '0' ; j <= '9' ; j++)
	{
		putchar(j);
		if (j != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
