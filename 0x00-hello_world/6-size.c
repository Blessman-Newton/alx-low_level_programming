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

printf("Size of a char: %i byte(s)", sizeof(a));
printf("Size of a int : %d byte(s)", sizeof(b));
printf("Size of a float : %i byte(s)", sizeof(c));
printf("Size of a long int : %ld byte(s)", sizeof(d));
printf("Size of long long iny : %lld bytr(s)", sizeof(e));
return (0);
}
