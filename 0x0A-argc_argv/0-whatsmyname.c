#include <stdio.h>
/**
 * main - program execution starts here
 *
 *@argc: number of arguments
 *@argv: values of arguments
 *
 * Description: print name of the program
 *
 * Return: int
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
