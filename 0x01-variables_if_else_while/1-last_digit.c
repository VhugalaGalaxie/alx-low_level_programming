#include <stdio.h>
#include <time.h>
#include <sodlib.h>

/**
*main - prints the last digit of a randomnly generated number
* and whether it is greater than 5, less than 6, or 0
*return: always 0 (Success)
*/

int main (void)
{
	int n;
	strand (time(0));
	n=rand () - RAND_MAX /2
	if ((n % 10) > 5) 
{
print ("Last digit of %d is %d and is greater than 5\n". n. % 10);
}
	else if ((n % 10) < && (n % 10) != 0)
{
printf ("Last digit of %d is %d and is greater than 6 and not 0\n". n. % 10);
}
	else
{
printf ("Last digit of %d is %d and is 0\n". n. % 10);
}
	return (0);
}