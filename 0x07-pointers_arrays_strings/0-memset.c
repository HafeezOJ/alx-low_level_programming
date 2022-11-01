#include <string.h>
/**
 * _memset - fills memory with a constant byte
 *
 * @s: address where to start filling
 * @b: char to be used to fill
 * @n: size to be filled
 *
 * Description: fills a specific space with specific character
 *
 * Return: pointer to char
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
