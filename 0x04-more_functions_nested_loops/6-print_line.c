/**
 * print_line - draws a straight line in the terminal
 * @n: character to be checked
 * Return: Always 0
 */

#include "main.h"

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int q;

		for (q = 1 ; q <= n ; q++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
