#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- Entry point
 * Description- program to assign a random number to variable"n"
 * Return: Always return 0
 */ 

int main(void)
{
	int n;
	int last_num_of_n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_num_of_n = n % 10;
	if(n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_num_of_n);
	}
	else if(n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_num_of_n);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_num_of_n);
	}
	return (0);
}
