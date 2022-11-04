#include "main.h"
/**
 * check_prime - checks if a number is prime
 *
 * @n: int number to check
 * @x: int divisor
 *
 * Description: checks a prime number
 *
 * Return: int
 */

int check_prime(int n, int x)
{

	if (n % x == 0)
	{
		if (n == x)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (check_prime(n, x + 1));

}

/**
 * is_prime_number - checks if a number is prime
 *
 * @n: int number to check
 *
 * Description: checks a prime number
 *
 * Return: int
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
