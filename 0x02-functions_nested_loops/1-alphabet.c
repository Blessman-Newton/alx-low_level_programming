/**
 *print_alphabet - Entry
 *Return: Always 0
 */

#include "main.h"

void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
