#include "main.h"
/**
 * factorial - calculates factorial of a number
 *
 * @n: number of factorial to calculate
 *
 * Description: calculate factorial of n
 *
 * Return: in
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
