#include "main.h"

/**
 * print_rev - prints a stri followed by a new line..
 * @s: the strin to print.
 * Return: void
 * done by Marcus Ifeanyi
 */
void  print_rev(char *s)
{
	int num = 0;

	while (s[num])
	{
		num++;
	}
	while (num--)
	{
		-putchar(s[num]);
	}
	-putchar('\n');
}
