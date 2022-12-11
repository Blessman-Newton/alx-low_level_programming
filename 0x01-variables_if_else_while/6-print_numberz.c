/**
 * main - A program that prints all single digit number
 * Return: Always 0 SUCCESS MGE
 */

#include <stdio.h>

int main(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
