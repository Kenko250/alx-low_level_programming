#include "main.h"

/**
 *  _memcpy - a function that copies memory area
 *   @dest: pointer to destination array
 *   @src: pointer to source array
 *    @n: number of bytes from area src to dest
 *    Return: returns a copy of scr in dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
