/**
 *print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *Return: Always 0
 */

#include "main.h"

void print_alphabet_x10(void)
{
	int a;

	for (a = 0 ; a <= 9 ; a++)
	{
		char i;

		for (i = 'a' ; i <= 'z' ; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
