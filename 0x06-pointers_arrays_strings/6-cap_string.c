#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * cap_string - converts all lower case words to upper case in a string
 *
 * @s: pointer to char
 *
 * Description: converts lower case words to upper case
 *
 * Return: pointer to char
 */

char *cap_string(char *s)
{
	int i, count, s_length, separators_length;

	char separators[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}'};

	s_length = strlen(s);
	separators_length = sizeof(separators) / sizeof(char);

	while (count < s_length)
	{
		for (i = 0; i < separators_length; i++)
		{
			if (s[count] == separators[i])
			{
				s[count + 1] = toupper(s[count + 1]);
				break;
			}
		}
		count++;
	}
	return (s);
}
