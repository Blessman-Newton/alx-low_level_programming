#include "main.h"
/**
 * *_memset - function that fills memory with a constant byt
 * @s: memory area to be fill
 * @b: area to be copy
 * @n: number of b to copy
 *
 * Return: return s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
