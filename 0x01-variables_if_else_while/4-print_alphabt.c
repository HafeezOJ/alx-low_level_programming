#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: Prints lower alphabets from a - z excluding 'q' and 'e'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'q' && alphabet != 'e')
		{
			putchar(alphabet);
		}
	}
	putchar('\n');
	return (0);
}
