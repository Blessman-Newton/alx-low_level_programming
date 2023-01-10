/**
 * main - prints its name, followed by a new line
 * @argc: number of argurment
 * @argv: array of argurment
 * Return: always return a successful mge
 */
#include "main.h"
#include <stdio.h>

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
