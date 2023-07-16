#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - prints the last digit of a randomnly generated number
* and whether it is greater than 5, less than 6, or 0
* Return: always 0 (Success)
*/

int main(void)
{
int n;

srand (time(0));
n = rand() - RAND_MAX / 2;
if ((n % 10) > 5)
{
printf("Last digit of n is n: %d and is greater than 5\n", n % 10);
}
else if ((n % 10) < 6 && (n % 10) != 0)
{
printf("Last digit is n: %d and is greater than 6 and not 0\n", n % 10);
}
else
{
printf("Last digit is n: %d and is 0\n", n % 10);
}
return (0);
}
