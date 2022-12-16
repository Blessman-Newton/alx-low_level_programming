/**
 * print_square - prints a square
 * @size: character to be checked
 * Return: Always 0
 */

#include "main.h"

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n')
	} else
	{
		int a, i;

		for (a = 0 ; a < size ; a++)
		{
			for (i = 0 ; i < size ; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
