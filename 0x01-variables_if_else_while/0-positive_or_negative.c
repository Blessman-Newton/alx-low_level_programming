
/**
 *main - Entry point
 *Return: Always 0
 */
#include <stdlib.h>
#include <time.h>
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
{
printf("is negative\n", n);
}
else if (n == 0)
{
printf("is zero \n", n);
}
else
{
printf("is positive \n", n);
}
return (0);
}
