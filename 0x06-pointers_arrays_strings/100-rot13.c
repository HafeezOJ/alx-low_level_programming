#include "main.h"
#include <string.h>
/**
 * rot13 - encodes a string with rot13
 *
 * @s: pointer to string
 *
 * Description: encodes string s with rot13
 *
 * Return: char
 */

char *rot13(char *s)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13_chars[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, m;
	int length_s = strlen(s);
	int length_alphabet = strlen(alphabet);

	for (i = 0; i < length_s; i++)
	{
		for (m = 0; m < length_alphabet; m++)
		{
			if (*(s + i) == alphabet[m])
			{
				*(s + i) = rot13_chars[m];
			}
		}
	}
	return (s);
}
