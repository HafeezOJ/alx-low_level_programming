#include "main.h"
#include <string.h>
/**
 * _strcat - writes to stdout
 *
 * @dest: pointer to destination string
 * @src: pointer to source string
 *
 * Description: appends src string to dest string
 *
 * Return: pointer to char
 */

char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
