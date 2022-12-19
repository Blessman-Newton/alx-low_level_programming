/**
 * _strlen - function that returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */

#include "main.h"

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
