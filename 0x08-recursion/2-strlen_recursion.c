#include "main.h"
/**
*_strlen_recursion - function that returs the length of a string
*@s: the string
*Return: the length of a string
*/
int _strlen_recursion(char *s)
{
int n = 0;
if (*s)
{
n = _strlen_recursion(s + 1);
return (n += 1);
}
else
return (0);
}
