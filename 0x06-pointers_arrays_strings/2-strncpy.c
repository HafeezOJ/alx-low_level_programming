#include "main.h"
#include <string.h>
/**
 * _strncpy - copies n bytes from src string to dest string
 *
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: bytes in int to copy to dest
 *
 * Description: copies n-bytes of src string to dest string
 *
 * Return: pointer to char
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
