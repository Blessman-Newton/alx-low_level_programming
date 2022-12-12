/**
 * main - all possible different combinations of two digits.
 * Return: Always 0
 */

#include <stdio.h>

int main(void)
{
	int f_digit, s_digit;

	for (f_digit = 0 ; f_digit < 9 ; f_digit++)
	{
		for (s_digit = f_digit + 1 ; s_digit < 10 ; s_digit++)
		{
			putchar((f_digit % 10) + '0');
			putchar((s_digit % 10) + '0');

			if (f_digit == 8 && s_digit == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
