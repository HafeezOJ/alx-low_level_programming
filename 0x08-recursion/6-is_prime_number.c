#include "main.h"
/**
 * _is_prime_number - checks if a number is prime
 *
 * @n: int number to check
 *
 * Description: checks a prime number
 *
 * Return: int
 */

int is_prime_number(int n)
{
	int x = 2;

	if (x % 2 == 0)
	{
		return (0);
	}
	
	if (is_prime_number(n % (x + 1)) == 0)
	{
		return (0);
	}
	return (1);

}
