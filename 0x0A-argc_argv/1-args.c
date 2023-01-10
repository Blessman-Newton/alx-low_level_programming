/**
 * main - prints the number of arguments passed into it
 * @argc: number of argument
 * @argv: array of argument
 * Return: always return 0 (success)
 */
#include "main.h"

int main(int argc, char *argv[] __attribute__((unused)))
{
	_putchar("%d\n", argc - 1);
	return (0);
}
