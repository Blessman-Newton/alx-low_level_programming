/**
 * main - prints the number of arguments passed into it
 * @argc: number of argument
 * @argv: array of argument
 * Return: always return 0 (success)
 */
#include "main.h"
#include <stdio.h>

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
