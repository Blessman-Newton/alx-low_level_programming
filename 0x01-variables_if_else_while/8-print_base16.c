/**
 * main -A program that prints numbers of base 16 in lowercae
 * Return: Always return 0 SUCCESSFUL MGE
 */

#include <stdio.h>

int main(void)
{
	int a;
	char b;

	for (a = '0' ; a <= '9' ; a++)
	{
		putchar(a);
	}
	for (b = 'a' ; b <= 'f' ; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
