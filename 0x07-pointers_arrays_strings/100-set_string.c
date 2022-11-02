#include <string.h>
/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: pointer to string to be set
 * @to: pointer to string value used to set s
 *
 * Description: sets value of a pointer to char
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
