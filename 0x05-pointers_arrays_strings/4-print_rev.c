/**
 * print_rev - prints a string, in reverse, followed by a new
 * @s: string to evaluate
 */

#include "main.h"

void print_rev(char *s)
{
	int i, u, rev;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	rev = i;

	for (u = rev - 1; u >= 0; u--)
	{
		_putchar(s[u]);
	}
	_putchar('\n');
}
