#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * leet - replace AEOTL with 43071
 *
 * @s: pointer to char
 *
 * Description: replace AEOTL with 43071
 *
 * Return: pointer to char
 */

char *leet(char *s)
{
	int i, count, s_length;

	char uppers[] = {'A', 'E', 'O', 'T', 'L'};
	char lowers[] = {'a', 'e', 'o', 't', 'l'};
	char numbers[] = {'4', '3', '0', '7', '1'};

	s_length = strlen(s);

	for (count = 0; count < s_length; count++)
	{
		for (i = 0; i < 5; i++)
		{
			if ((*(s + count) == uppers[i]) || (*(s + count) == lowers[i]))
			{
				*(s + count) = numbers[i];
				break;
			}
		}
	}
	return (s);
}
