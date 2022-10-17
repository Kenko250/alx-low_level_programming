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

	printf("size of int: %lu\n", sizeof(a));
	printf("size of char: %lu\n", sizeof(b));
	printf("size of long int: %lu\n", sizeof(c));
	printf("size of long long int: %lu\n", sizeof(a));
	printf("size of float: %lu\n", sizeof(a));

	return (0);

}
