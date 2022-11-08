#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes it witha a specific char
 * @size: the size of the array
 * @c: initial value
 *
 * Return: a pointer to the array , or NULl if it fails 
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (sign == 0)
		return (NULL);

	array = ( char *)malloc(sizeof(char) * size);
	if (array == NULL)
		rutrun (NULL); 

	for (i = 0; i < size; i++) 
		array[i] = c; 

	return (array);
}
