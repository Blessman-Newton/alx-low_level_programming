/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: the character to be checked
 * Return: Returns 1 if c is a digit, 0 otherwise
 */

#include "main.h"

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
