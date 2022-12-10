/**
 *main - Entry
 *Return: Always
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
int n;
int a;
srand(time(0));
n = rand() - RAND_MAX / 2;
a = n % 10;
if (n > 5)
{
printf("Last digit of %d is %d and greater than 5\n", n, a);
}
else if (n == 0)
{
printf("Last digit of %d is %d and is  0\n", n, a);
}
else
{
printf("Last digit of %d is %d and is less than 8 and not 0\n", n, a);
}
return (0);
}
