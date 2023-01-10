/**
 * main - prints all arguments it receives.
 * @argc: number argument
 * @argv: array argument
 * Return: always 0 (success)
 */
#include "main.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
