#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int x;
	srand(time(0));
	x = rand() - RAND_MAX / 2;

	printf("%d \n", x);

	/* This code will assign a random number to the variable n each time it is executed and print whether the number stored in variable n is positive or negative */
	if (x > 0)
	{
		printf("The number is positive \n");
	}
	else if (x < 0)
	{
		printf("The number is negative \n");
	}
	else
	{
		printf("The number is zero \n");
	}
	return 0 ;
}
