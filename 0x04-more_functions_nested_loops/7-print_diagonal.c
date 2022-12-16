/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: character to be checked
 * Return: Always 0
 */

#include "main.h"

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n')
	} else
	{
		int a, j;

		for (a = 0 ; a < n ; a++)
		{
			for (j = 0 ; j < n ; j++)
			{
				if (j == a)
				{
					_putchar("\\");
				} else if (j < a)
				{
					_putchar(' ')
				}
			}
			_putchar('\n');
		}
	}
}
