#include <stdio.h>

/**
 * main- Entry point
 * Description: Print size of various types to stdout
 * Return: return 0
 */

int main(void)
{
	int a;
	char b;
	long int c;
	long long int d;
	float e;

	printf("size of int: %d\n", sizeof(a));
	printf("size of char: %d\n", sizeof(b));
	printf("size of long int: %d\n", sizeof(c));
	printf("size of long long int: %d\n", sizeof(d));
	printf("size of float: %d\n", sizeof(a));

	return (0);

}
