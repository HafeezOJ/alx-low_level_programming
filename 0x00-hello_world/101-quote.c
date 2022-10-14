#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A C program to write to standard error
 *
 * Return: 0 (succes)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (1);
}
