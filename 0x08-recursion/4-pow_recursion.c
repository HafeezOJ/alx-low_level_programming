#include "main.h"
/**
 * _pow_recursion - calculates x raised to y
 *
 * @x: number to be raised
 * @y: number to be raise to
 *
 * Description: calculates x raised to y
 *
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
