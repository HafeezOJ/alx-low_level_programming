#include <string.h>
/**
 * _strspn - calculates the length of accept in s
 *
 * @s: char string to be searched from
 * @accept: char string to be checked for
 *
 * Description: gets the length of accept bytes in s bytes
 *
 * Return: pointer int bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
