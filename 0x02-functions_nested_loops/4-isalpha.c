#include "main.h"

/**
 *i_isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Returns: 1 if c is a letter, lowercase or uppercase
 */


int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
