#include "main.h"

/**
 *_isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Returns: 1 if c is a letter, lowercase or uppercase
 */

/**
 * _isalpha - checks for alphabetic character
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
