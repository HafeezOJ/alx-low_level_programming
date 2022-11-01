#include <string.h>
/**
 * _memcpy - copies n bytes from src bytes to dest
 *
 * @dest: address where to start filling copy
 * @src: address where to start copying
 * @n: size to be copied
 *
 * Description: copies n bytes from src to dest
 *
 * Return: pointer to char dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
