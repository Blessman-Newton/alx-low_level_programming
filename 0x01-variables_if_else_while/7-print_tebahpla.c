/**
 * main -A program that print the lowercase alphabet in revers
 * Return: Always return 0 SUCCESS MGE
 */

#include <stdio.h>

int main(void)
{
	char z;

	for (z = 'z' ; z >= 'a' ; z--)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
