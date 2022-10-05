include "main.h"
#include <stdlib.h>
/**
 *main - create array of chars and initializes it
 *@size: size of array
 *@c: char to assign
 *Return: pointer to array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *char_arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	char_arr == malloc(sizeof(char) * size);
	if (char_arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		char_arr[i] = c;
	return (char_arr);
}
