#include <stdio.h>
#include <string.h>
/**
 * main - program execution starts here
 *
 *@argc: number of arguments
 *@argv: values of arguments
 *
 * Description: print number of arguments
 *
 * Return: int
 */

int main(int argc, char *argv[] __attribute__((unused)))
{

	printf("%d\n", argc - 1);
	return (0);
}
