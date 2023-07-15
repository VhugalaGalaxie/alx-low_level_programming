#include <stdio.h>
#include <time.h>

/**
*main - determines if a number is positive,negative or zero
*return: always 0 (Success)
*/

int main (void)
{
	int n;
	strand(time(0));
	n = rand() - RAND_MAX/2;
	if (n > 0)
{
print ("%d is positive \n" .n);
}
	else if (n == 0)
{
printf ("%d is zero \n" .n);
}
	else
{
printf ("%d is negative \n" .n);
}
	return (0);
} 
