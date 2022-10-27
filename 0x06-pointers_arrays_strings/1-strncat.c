#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates n bytes to a string from another
 *
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: bytes in int to add to dest
 *
 * Description: appends n-bytes of src string to dest string
 *
 * Return: pointer to char
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
