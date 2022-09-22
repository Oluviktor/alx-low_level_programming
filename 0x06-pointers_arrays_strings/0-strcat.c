#include "main.h"

/**
*0-strcat.c - Concatenates the string to by@src to
*the end of the string pointed to by @dest
*@dest: String that will be appended
*@scr: String to be concatenated upon
*
*Return: returns pointer to @dest
*/

char *_strcat(char *dest, char *src)
{

int i = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
