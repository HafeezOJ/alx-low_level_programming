#include <stdio.h>
/**
 * main - program execution starts here
 *
 * Description: print name of the program
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i = 0;
	while(i < argc)
		printf("%s\n", argv[i]);
	return (0);
}
