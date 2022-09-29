#include "main.h"
/**
*factorial - function that returns the factoria of a number
*@n: number to use
*Return: return factor
*/
int factorial(int n)
{
if (n > 0)
return (n * factorial(n - 1));
return (1);
if (n < 0)
return (-1);
}
