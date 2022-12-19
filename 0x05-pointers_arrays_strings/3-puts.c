/**
 * _puts - function that prints a string, followed by a new
 * @str: string to evaluate
 */

#include "main.h"

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
