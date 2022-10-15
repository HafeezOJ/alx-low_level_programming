#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: Prints lower alphabets from a - z and upper alphabets A - Z.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower_char;
	char upper_char;

	for (lower_char = 'a'; lower_char <= 'z'; lower_char++)
	{
		putchar(lower_char);
	}
	for (upper_char = 'A'; upper_char <= 'Z'; upper_char++)
	{
		putchar(upper_char);
	}
	putchar('\n');
	return (0);
}
