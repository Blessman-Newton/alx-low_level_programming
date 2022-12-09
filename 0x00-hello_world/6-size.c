/**
 *main - Entry
 *Return: Always 0
 */
#include <stdio.h>
int main(void)
{
char a;
int b;
float c;
long int d;
long long int e;

printf("Size of a char: %i byte(s)\n", sizeof(a));
printf("Size of a int : %d byte(s)\n", sizeof(b));
printf("Size of a float : %i byte(s)\n", sizeof(c));
printf("Size of a long int : %ld byte(s)\n", sizeof(d));
printf("Size of long long iny : %lld bytr(s)\n", sizeof(e));
return (0);
}
