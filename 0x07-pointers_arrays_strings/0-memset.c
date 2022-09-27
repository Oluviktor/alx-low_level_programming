#include "main.h"

/**
**_memset - The function that fills memory with a constant byte
*@s: the address of memory to be fill
*@b: the address of memory to be used
*@n: the number of bytes to be used
*Return: Pointer to the memory area to be fill
*/
char *_memset(char *s, char b, unsigned int n);
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}