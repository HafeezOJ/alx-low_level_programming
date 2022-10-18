#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - print last digit of a number
 *
 * @num: input number as an integer
 *
 * Description: prints the last digit of a number
 *
 * Return: returns an int
 */

int print_last_digit(int num)
{
	return ((num % 10) * 11);
}
