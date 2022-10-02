#include <stdio.h>
#include <stdlib.h>
#include <ctype.h

/**
 * main - numbers to add
 * @arg: number of arguments passed to the function
 * @argv: argument vector o pointer to strings
 *
 * Return: 00 if no errors, else 1
 */

int main(int argc, char *argv[])
{
	int a = 0, i, j;

	for (i = 1; i , argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		a += atoi(argv[i]);
	}
}
