/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: Always 0
 */

#include "main.h"

void more_numbers(void)
{
	int a;
	int i;

	for (a = 0 ; a < 10 ; a++)
	{
		for (i = 0 ; i < 15 ; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
