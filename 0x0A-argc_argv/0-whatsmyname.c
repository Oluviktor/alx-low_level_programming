#include <stdio.h>

/**
 * main - Print the name of a program followed by new line
 * @argc: argument counter that passed to the function
 * @argv: argument vector to the string
 *
 * Return: void
 */
int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
