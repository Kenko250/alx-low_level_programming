#include <stdio.h>

/**
 *  main - Entry Point
 *
 *  Description: Print all possible combinations fo single-digit numbers.
 *
 *
 *  Return: returns :0
 */

int main(void)
{
	char num;

	for (num = 48; num <= 57; num++)
	{
		if(num == 44)
		{
			break;
		}
		putchar(num);
		putchar(',');
		putchar(' ');
	}
		putchar('\n');
	return (0);
}
