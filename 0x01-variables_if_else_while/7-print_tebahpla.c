#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: Prints lower alphabets from a - z in reverse other
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet <= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
