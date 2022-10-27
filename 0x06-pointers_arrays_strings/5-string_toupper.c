#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * string_toupper - converts all lower case to upper case in a string
 *
 * @s: pointer to char
 *
 * Description: converts lower case chars to upper
 *
 * Return: pointer to char
 */

char *string_toupper(char *s)
{
	int length = strlen(s);
	int i;

	for (i = 0; i < length; i++)
	{
		toupper(*(s + i));
	}
	return (s);

}
