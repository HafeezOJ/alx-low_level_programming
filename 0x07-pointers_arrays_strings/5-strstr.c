#include <string.h>
/**
 * _strstr - finds first occurence of needle in haystack
 *
 * @haystack: char string to be searched from
 * @needle: char string to be checked for
 *
 * Description: finds first occurence of needle in haystack
 * amd prints occurence to end of haystack
 *
 * Return: pointer to beginning of occurence
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
