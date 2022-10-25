#include "main.h"
#include <string.h>
/**
 * _strcpy - copies a string to another
 *
 * @dest: pointer to destination string
 * @src: point to source string
 *
 * Description: copy source string to destination string
 *
 * Return: pointer to char
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
