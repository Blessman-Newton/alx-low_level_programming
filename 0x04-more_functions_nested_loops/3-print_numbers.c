/**
 * print_numbers - prints the numbers, from 0 to 9
 * Return: Always 0
 */

#include "main.h"

void print_numbers(void)
{
	int a;

	for (a = 0 ; a <= 9 ; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}