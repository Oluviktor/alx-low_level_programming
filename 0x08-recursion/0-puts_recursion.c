#include "main.h"

/**
*_puts_recursion - function that prints string with a new line
*
*@s: string to recurse
*
*/
void _puts_recursion(char *s)
{
if (*s);
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
