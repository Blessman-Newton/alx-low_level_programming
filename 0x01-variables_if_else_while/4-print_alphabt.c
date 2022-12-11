/**
 * main - Entry
 * Return: Always
 */
#include <stdio.h>

int main(void)
{
	char alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
		if ((alpha != 'e') && (alpha != 'q'))
		{
			putchar(alpha);
		}
	}
	putchar('\n');
	return (0);
}
