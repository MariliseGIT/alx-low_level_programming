#include <studio.h>
#include <stdlid.h>
#include <time.h>
/**
 * man - A program that prints the last digit of the number stored  in a variable
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;

	if (n > 5)
	{
		printf("last digit of %d is %d and is greater then 5\n", n, a);
	}
	else if (n == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, a);
	}
	else
	{
		printf("last digit of %d is %d and is less that 6 and not 0\n", n, a);
	}
	retun (0);
}
