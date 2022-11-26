#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - Entry point
 * @size: size of the array
 * @c: character
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
		char *array;
		unsigned int counter;

		if (size <= 0)
		{
			return (NULL);
		}
		else
		{
		array = (char *)malloc(size * sizeof(char));

		if (array == NULL)
		{
			return (0);
		}
		else
		{
			counter = 0;
			while (counter < size)
			{
				*(array + counter) = c;
				counter++;
			}
			return (array);
			}
		}
}
